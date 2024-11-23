#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>

using namespace std::chrono;
using namespace std;

long long linearSearch(long long arr[], long long key, long long size)
{
    for (long long i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

void timetaken()
{
    long long size = 50;
    for (long long i = 0; i < 10; i++)
    {
        long long arr[size];
        for (long long j = 0; j < size; j++)
        {
            arr[j] = rand();
        }

        long long key = arr[size / 2];  // Searching for a random element in the array
        auto start1 = high_resolution_clock::now();

        for (long long j = 0; j < 100; j++)
        {
            linearSearch(arr, key, size);
        }

        auto stop1 = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop1 - start1);

        cout << "Size: " << size << " Time taken in microseconds: " << (double)(duration.count() / 100.0) << endl;
        size = size * 10;
    }
}

int main()
{
    timetaken();
    return 0;
}
