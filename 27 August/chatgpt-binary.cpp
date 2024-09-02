#include <iostream>
#include <chrono>
#include <algorithm>  // For std::sort
using namespace std;
using namespace std::chrono;

int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int initial_size = 100;
    int target = -1;  // A value unlikely to be in the array for the worst-case scenario

    for (int size = initial_size; size <= initial_size * 10000; size *= 10) {
        int* arr = new int[size];

        // Fill the array with values from 0 to size-1
        for (int i = 0; i < size; ++i) {
            arr[i] = i;
        }

        // Ensure the array is sorted (binary search requires a sorted array)
        sort(arr, arr + size);

        // Measure the time taken by the binary search
        auto start_time = high_resolution_clock::now();
          for (int i = 0; i < 100; ++i) {
            binarySearch(arr, size, target);
        }
       
        auto end_time = high_resolution_clock::now();

        // Calculate the time in milliseconds
        auto duration = duration_cast<nanoseconds>(end_time - start_time).count();

        cout << "Array size: " << size << " | Time taken: " << duration << " nanoseconds" << endl;

        delete[] arr;  // Clean up dynamically allocated memory
    }

    return 0;
}
