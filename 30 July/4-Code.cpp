// Aim= Make an array b from the given array a of the same size from 1 to n such that b[i] 
// contains the product of element of a[i] but not the element present at that index.
#include<iostream>
using namespace std;

int main(){
    int a[10]={1,2,3,4,5,6,7};
    int b[10];
    int c=a[0];
    int n=7;
    for (int i = 1; i < n; i++)
    {
        c=c*a[i];
        // cout<<c<<"  ";
    }cout<<endl;
    for (int i = 0; i < n; i++)
    {
        b[i]=c/a[i];
    }
    cout<<endl;
    cout<<"Elements of new array - ";
    for (int i = 0; i < n; i++)
    {
        cout<<b[i]<<"  ";
    }
    return 0;
}
