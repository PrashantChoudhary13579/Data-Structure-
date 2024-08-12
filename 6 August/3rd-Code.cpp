// We have given a function f = a0 + a1*x + a2*x^2 +......an*x^n . write the code for this function
#include<iostream>
#include<math.h>
using namespace std;
void function(int arr[],int n,int value)
{
    int x;
    int num=1;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        
        if (i==0)
        {
            num=arr[0];
            cout<<num;
        }
        else
        {
        num=arr[i]* pow(value, i);
        cout<<" + "<<num ;
        }
        // sum=sum+num;
        sum+=num;
    }    
    cout<<"  =  "<<sum;
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8};
    function(arr,8,2);
    return 0;
}
