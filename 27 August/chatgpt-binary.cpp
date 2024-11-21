#include <iostream>
#include <chrono>
#include <algorithm>
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
    int target = -1;

    for (int size = initial_size; size <= initial_size * 10000; size *= 10) {
        int* arr = new int[size];

        for (int i = 0; i < size; ++i) {
            arr[i] = i;
        }

        sort(arr, arr + size);

        auto start_time = high_resolution_clock::now();
        for (int i = 0; i < 100; ++i) {
            binarySearch(arr, size, target);
        }
        auto end_time = high_resolution_clock::now();

        auto duration = duration_cast<nanoseconds>(end_time - start_time).count();

        cout << "Array size: " << size << " | Time taken: " << duration << " nanoseconds" << endl;

        delete[] arr;
    }

    return 0;
}
