// This is the code of 30 July
// Aim= We are given an array of n consecutive numbers and we have to find the one which is missing from it 
// Without using any addition , subtraction, multiplication, division
// We are given that we have decimal,binary, hexadecimal representation
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int power(int i)
{
   int p=0;
   if(i==0)
   {
      return 1;
   }
   else
   {
      
   }
}
int binary(int n)
{
    //   int i=0;
      int binary=1,div=n,rem=0,ans=0;
      int i=0;
     while (div!=0)
     {
      binary=n&1;
      ans=(binary *power(10,i))+ans;
      n=n>>1;

      //   rem=div%2;
      //   binary=binary*10+rem;
      //   div=div/2;
     }
     return binary;
     
}
int check(int m,int n)
{
    
}
int main()
{
    int arr[10]={7,8,9,12,13,14,15,16};
   int brr[10];
   int n=sizeof(arr)/sizeof(arr[0]);
   for (int i = 0; i < n; i++)
   {
      brr[i]=binary(arr[i]);
      cout<<brr[i]<<"  ";
   }
      
   // cout<<y<<endl;
}