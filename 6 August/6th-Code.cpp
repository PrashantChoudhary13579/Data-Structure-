// Recursion of sum of n numbers 
#include<iostream>
using namespace std;
int sum(int a[],int n)
{
    if (n!=0)
    {
        return (a[n]+sum(a,n-1) );
    }
    else
    {
        return 0;
        
    }
    
}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int s=sum(arr,10);
    cout<<s;

}