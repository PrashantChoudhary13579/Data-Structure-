//We have to write the code for binary Search and have an option to opt whether iterative or recursive
#include<iostream>
using namespace std;
int binaryiterative(int arr[],int n,int key)
{
    int low=0;
    int high=n-1;
    int mid=low+(high-low)/2;
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
int binaryrecursion (int arr[], int key, int low,int high)
{
   
   int mid=low+(high-low)/2;
    if (arr[mid]==key)
    {
        return mid;
    }
    else if(key<arr[mid])
    {
        return binaryrecursion(arr,key,low,mid-1);
    }
    else
    {
        return binaryrecursion(arr,key,mid+1,high);
    }
    return -1;
    
}
int main(){
    int arr[5]={2,3,5,7,9};
    int size=sizeof(arr)/sizeof(arr[0]);
     int low=0;
    int high= size-1;
    int key,n ;
    cout<<"Enter the number as key "<<endl;
    cin>>key;
    // int y=binaryiterative(arr,n,key);
    // cout<<"The value is at index "<<y<<endl;
     cout<<"Enter 1 for linear search using iterative "<<endl;
    cout<<"Enter 2 for linear search using recursive "<<endl;
    cin>>n;
    
    if(n==1)
    {
        int y=binaryiterative(arr,size,key);
         cout<<"The number is at index "<< y<<" using iterative."<<endl;

    }
    else if(n==2) 
    {
        int z=binaryrecursion(arr,key ,low ,high);
         cout<<"The number is at index "<< z<<" using recursive."<<endl;
    }
   else 
   {
    cout<<"Sorry invalid case<< "<<endl;
   }
    
    return 0;
}