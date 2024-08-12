// This is the code for doing the binary search using recursion 
#include<iostream>
using namespace std;
int recursion (int arr[], int key, int low,int high)
{
   
   int mid=low+(high-low)/2;
    if (arr[mid]==key)
    {
        return mid;
    }
    else if(key<arr[mid])
    {
        return recursion(arr,key,low,mid-1);
    }
    else if(key>arr[mid])
    {
        return recursion(arr,key,mid+1,high);
    }
    else
    {
        return -1;
    }
    
}
int main(){
    int arr[5]={2,4,6,8,10};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the value of key"<<endl;
    int key;
    cin>>key;
     int low=0;
    int high= n-1;
    int r=recursion(arr,key,low,high);
    if(r == -1)
    {
    cout<<"Value doesn't exist"<<endl;
    }
    else
    {
    cout<<"The index of the value is "<<r<<endl;
    }


    return 0;
}