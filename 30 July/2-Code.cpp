// This is the code of 30 July
// Aim= We are given an array of n consecutive numbers and we have to find the one which is missing from it 
// Without using any addition , subtraction, multiplication, division
// We are given that we have decimal,binary, hexadecimal representation
#include<iostream>
// #include<bits/stdc++.h>
#include<math.h>
using namespace std;
// int power(int x,int i)
// {
//    int p=1;
//    if(i==0)
//    {
//       return 1;
//    }
//    else
//    {
//       while (i!=0)
//       {
//          p=p*10;
//          i--;
//       }
      
//    }
//    return p;
// }
int binary(int n)
{
    //   int i=0;
      int binary=1,div=n,rem=0,ans=0;
      int i=0;
     while (div!=0)
     {
      binary=n&1;
      ans=(binary *pow(10,i))+ans;
      n=n>>1;
      i++;

      //   rem=div%2;
      //   binary=binary*10+rem;
      //   div=div/2;
     }
     return binary;
     
}
// int check(int m,int n)
// {
    
// }
int main()
{
    int arr[10]={7,8,9,12,13,14,15,16};
   int brr;
   // int n=sizeof(arr)/sizeof(arr[0]);
   for (int i = 0; i < 8; i++)
   {
      brr=binary(arr[i]);
      cout<<brr<<"  ";
   }
   int n=7;
   int d=binary(n);
   cout<<d;
      
   // cout<<y<<endl;
}