#include<iostream>
#include<array>
#include<bits/stdc++.h>
using namespace std;
void selectionsort(vector <int> &arr)
{
    int n= arr.size();
    for(int i=0;i<n-1;i++)
    {
    int min_index = i ;
    // we should use indexing for the array
        
        for(int j=i+1; j< n; j++)
        {
            if(arr[min_index] > arr[j])
            {
                min_index = j;
            }
        }
       swap(arr[min_index],arr[i]);
    }
}
void display(vector <int> & arr)
{
    int n = arr.size();
    for(int i=0;i< n;i++)
    {
        cout<<arr[i]<<" " ;
    }
}
int main()
{
    vector <int> v = {45,56,33,78,12};
    cout<<"Before sorting : ";
    display(v);
    selectionsort(v);
    cout<<endl;
    cout<<"After sorting : ";
    display(v);
    return 0;
}