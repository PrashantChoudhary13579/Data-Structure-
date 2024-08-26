// Again writing the code of binary search using recursion but the twist in this is that this time i have to write the code in the main function 
#include<iostream>
using namespace std;
int main()
{
    int arr[5]={2,4,6,7,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int key;
    cout<<"Enter the key"<<endl;
    cin>>key;
    if (s==e)
    {
        cout<<s;
    }
    else
    {
        if (key<arr[mid])
        {
            e=mid-1;
            cout
        }
        else

    }
    
}