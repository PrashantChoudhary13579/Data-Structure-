// In this code we have to find the time complexities of the linear search and plot the graph of the of the output and match it with the general given
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
        for (long long i = 0; i < size; i++)
        {
            arr[i] = rand();
            // cout<<arr[i]<<endl;
        }
        // time_t starttime=time(NULL);
        auto start1 = high_resolution_clock::now();

        for (long long i = 0; i < 100; i++)
        {
            linearSearch(arr, arr[size], size);
        }
        // time_t endtime=time(NULL);
        auto stop1 = high_resolution_clock::now();
        // time_t av = (endtime-starttime)/100;
        // long long av = (endtime-starttime)/100;
        auto duration = duration_cast<microseconds>(stop1 - start1);

        cerr << "Time taken in microseconds : "
             << (double)(duration.count() / 1000.0) << endl;
        // return av;
        size = size * 10;
        cout << size << endl;
    }
}

int main()
{
    // double first = timetaken();
    // cout<<first<<endl;
    timetaken();
    return 0;
}