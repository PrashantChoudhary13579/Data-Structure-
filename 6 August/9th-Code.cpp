// f(n)=a0 + a1*x + a2*x^2 + a3*x^3 + ........+ an*x^n;
// Solving this function using recursion.
#include<iostream>
using namespace std;
void adding_recursion(int arr[],int s,int i,int x)
{
    if (i!=-1)
    {
        s=arr[i] + x*s;
        i--;
        return adding_recursion(arr,s,i,x);
    }
    else
    {
        int i=0,n=5;
        cout<<" = "<<s;
    }
}
int main(){
    int arr[10];
    cout<<"Enter the size of the array - "<<endl;
    int n;
    cin>>n;
    cout<<"Enter the elements of the array - "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }    
    int s=arr[n-1];
    int i=n-2;
    int x;
    cout<<"Enter the value of x "<<endl;
    cin>>x;
     cout<<arr[0];
    for (int i =1; i < n; i++)
    {
        cout<<" + "<<x<<"[ "<<arr[i];
        
    }
    for (int i = 0; i < n-1; i++)
    {
        cout<<"]";
    }
    adding_recursion(arr,s,i,x);
    
    return 0;
}