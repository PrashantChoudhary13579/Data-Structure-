// now i am doing the insertion sort 
// 1. start the for loop from 0 to n-1
// 2. then i will take the value of the array into a variable temp.
// 3. Then i start a while loop having a condition that the loop will go on until j!= n . 
// 4. inside this i will make if condition checking whether j >= 0 and temp < array[j]. 
// 5. if the condition is true then i will shift the value of the arr[j ]= arr[j--] and then i will again decrement j by 1 .
// 6. after the while loop i will insert the array[j] = temp.

#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void insertionSort(vector<int> & arr)
{
    int n = arr.size();
        for(int i=1; i < n ;i++ )
        {
            int temp = arr[i];
            int j = i-1;
            while(j>= 0 && temp < arr[j])
            {
               
                arr[j+1] =arr[j];
                j--;
            }
            
            arr[j+1]= temp;
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
    insertionSort(v);
    cout<<endl;
    cout<<"After sorting : ";
    display(v);
    return 0;
}