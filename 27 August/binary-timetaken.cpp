// In this code we have to find the time taken of the linear search and plot the graph of the of the output and match it with the general given
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>

using namespace std::chrono;
using namespace std;

long long binarySearch(long long arr[], long long size, long long target) {
    long long left = 0;
    long long right = size - 1;

    while (left <= right) {
        long long mid = left + (right - left) / 2;

        // Check if target is present at mid
        if (arr[mid] == target) {
            return mid;
        }
        // If target is greater, ignore the left half
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        // If target is smaller, ignore the right half
        else {
            right = mid - 1;
        }
    }

    // Target was not present in the array
    return -1;
}
int main()
{
   long long size = 10;
    for (long long i = 0; i < 10; i++)
    {
        // Writing the code here
         cout << "Size of the array = "<< size << endl;
         // filling the array
        long long arr[size];
        for (long long i = 0; i < size; i++)
        {
            arr[i] = rand();
        }
         // Record the starting time
        auto start1 = high_resolution_clock::now();

        // finding the average of the binary search
           for (long long i = 0; i < 100; i++)
        {
            binarySearch(arr, size , arr[size]);
        }

        //Record the exit time 
         auto stop1 = high_resolution_clock::now();
         // duration of the execution of the binarysearch
          auto duration = chrono::duration_cast<chrono::milliseconds>(stop1 - start1);
    //  cout << "Time taken: " << duration << " nanoseconds" << endl;
          cerr << "Time taken in milliseconds : "
             << (double)(duration.count())*1000 << endl;
        size = size * 10;
    }

    return 0;
}
