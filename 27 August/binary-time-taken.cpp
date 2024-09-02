// In this code we have to find the time taken of the linear search and plot the graph of the of the output and match it with the general given
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>

using namespace std::chrono;
using namespace std;
long long binaryiterative(long long arr[],long long n,long long key)
{
    long long low=0;
    long long high=n-1;
    long long mid=low+(high-low)/2;
   while (low<=high)
   {
         if(arr[mid]==key)
         {
            return mid;
            
         }
        else if (arr[mid]>key)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
        mid=low+(high-low)/2;   
    }
     return mid;
}
void timetaken()
{
    long long size = 50;
    for (long long i = 0; i < 10; i++)
    {
         cout << size << endl;
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
            binaryiterative(arr, size , arr[size]);
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
       
    }
}

int main()
{
    // double first = timetaken();
    // cout<<first<<endl;
    timetaken();
    return 0;
}