// Heap , insertion, selection, bubble, quick sorting krni h  
#include<iostream>
#include<string>
#include<algorithm>
// #define int long long
#define vi vector<int>
using namespace std;
void heapify(int a[],int n, int i)
{
    int maxIdx = i;
    int l = 2*i+1;
    int r = 2*i+2;

    if (l<n && a[l]>a[maxIdx])
    {
        maxIdx = l;
    }
    if (r<n && a[r]>a[maxIdx])
    {
        maxIdx = r;
    }
    if (maxIdx != i)
    {
        swap(a[i],a[maxIdx]);

        heapify(a,n,maxIdx);
    }
}
void heapsort (int a[])
{
    int n = ;

}
int main()
{
    int n;
    int arr[5]={7,5,9,1,8};
    n = sizeof(arr)/sizeof(arr[0]);

    for (size_t i = 0; i < count; i++)
    {
        /* code */
    }
    


}