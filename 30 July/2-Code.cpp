// This is the code of 30 July
// Aim= We are given an array of n consecutive numbers and we have to find the one which is missing from it 
// Without using any addition , subtraction, multiplication, division
// We are given that we have decimal,binary, hexadecimal representation
#include<iostream>
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int binary(int n)
{
    //   int i=0;
      int binary=0,div=n,rem=0;
     while (div!=0)
     {
        rem=div%2;
        binary=binary*10+rem;
        div=div/2;
     }
     return rem;
     
}
int check(int m,int n)
{
    
}
int main()
{
    int arr[10]={1,2,3,4,5,7,8,9};
   // int y= binary(arr); 
   int n=sizeof(arr)/sizeof(arr[0]);
   for (int i = 0; i < n; i++)
   {
      /* code */
   }
      
   // cout<<y<<endl;
}