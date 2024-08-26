/*
In  this time we have to print a pattern using recursion . It is somewhat different as 
when n=2  we have to print FF FT TF TT  and when we have n=3  we have to print
 FFF FFT FTF TFF FTT TFT TTF TTT
*/
#include<iostream>
using namespace std;
void Pattern(int k,int n,int a[] )
{
    if(k>n)
    {
        for (int i = 1; i < k; i++)
        {
           cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    else
    {
        a[k]=1;Pattern(k+1,n,a);
        a[k]=0;Pattern(k+1,n,a);
    }
}
int main(){
    int n;
    cout<<"Enter the value of n "<<endl;
    cin>>n;
    int a[n];
    Pattern(1,n,a);
    
    return 0;
}