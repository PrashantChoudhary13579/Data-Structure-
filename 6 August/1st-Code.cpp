// We have to write the code for linear Search and have an option to opt whether iterative or recursive
#include<iostream>
using namespace std;

int iterative(int arr[], int size,int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==key)
        {
            return i;
        }
        
    }
    return -1;
}

int recursive (int arr[],int size, int key)
{
    if(arr[size]==key)
    {
        return size;
    }
    else return recursive(arr,size-1,key);
}


int main(){
    int n;

    int arr[5]={1,2,3,6,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<"Enter 1 for linear search using iterative "<<endl;
    cout<<"Enter 2 for linear search using recursive "<<endl;
    cin>>n;
    cout<<"Enter the number you want to search "<<endl;
    int num;
    cin>>num;
    if(n==1)
    {
        int y=iterative(arr,size,num);
         cout<<"The number is at index "<< y<<" using iterative."<<endl;

    }
    else if(n==2) 
    {
        int z=recursive(arr,size,num);
         cout<<"The number is at index "<< z<<" using recursive."<<endl;
    }
   else 
   {
    cout<<"Sorry invalid case<< "<<endl;
   }
    return 0;
}