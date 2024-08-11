// We have given a function f = a0 + a1*x + a2*x^2 +......an*x^n . write the code for this function
#include<iostream>
#include<math.h>
using namespace std;
void function(int arr[],int n)
{
    int x;
    int num=1;
    
    for (int i = 0; i < n; i++)
    {
        if (i==0)
        {
            cout<<"1 + ";
        }
        else
        {
        num=arr[i];
        cout<<num<<"x^"<< i << " + ";
        }
    }    
}
int main(){
    int arr[5]={1,2,3,4,5};
    function(arr,5);
    return 0;
}
