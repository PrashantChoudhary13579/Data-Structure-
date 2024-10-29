#include <iostream>
#include<algorithm>
using namespace std;
void partition (int arr[], int n)
{
    int p = arr[0];
    int i = 0;
    int j = n;
    while(i<j)
    {
        do
        {
            i++;
        } while (i<j && arr[i]< p);
        do
        {
            j--;
        } while (j>=0 && arr[j] >p);
        if (i<j)
        {
            swap(arr[i],arr[j]);
        }
    }
    swap(p,arr[i]);
}
int main()
{
    int arr[6]={5,8,2,4,9,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    partition(arr,n);
    cout<<"Sorted array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    

}