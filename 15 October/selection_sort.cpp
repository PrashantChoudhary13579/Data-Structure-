// Here i (Prashant Choudhary) am writing my code  of selection sorting on 21 october but putting this in the file of 15 october as i was unable to do it at that time feeling somewhat sorry for that.
// in this selection sort
// Algorithm is here
/*
    1. We have to take an array which has an unordered list.
    2. In this, we will  start the loop from i = 0 upto n-1 .
    3. Then we will compare it from the j=i+1 upto n such that we will find the smallest element in it.
    4. And we will swap with the smallest element with i . 
    5. and increase the loop to the next.
*/
#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;

    int arr[size];
    cout<<"Enter the elements of the array"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    // now sorting the array 
    for (int i = 0; i < size-1; i++)
    {
        int temp = arr[i];
        for (int j = i+1; j < size; j++)
        {
            if (temp > arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i]= temp;
            }   
        }
    }

    // output
    cout<<"Sorted Array: ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    
    
}