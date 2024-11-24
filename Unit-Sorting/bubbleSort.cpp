#include<iostream>
#include<algorithm>
using namespace std;
void bubblesort(int arr[],int size)
{
    int n = size;
    for(int i = 0; i < n-1; i++)
    {
        for(int j= 0 ; j < n-i-1 ;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }

}
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int array[6]={4,7,9,2,5,1};
    int size = sizeof(array)/sizeof(array[0]);

    cout<<"Before sorting : ";
    display(array,size);
    bubblesort(array,size);
    cout<<endl;
    cout<<"After sorting : ";
    display(array,size);
    return 0;
}
// time complexity - O (n2);
// space complexity - O(1);