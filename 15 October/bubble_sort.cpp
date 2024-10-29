// Here i (Prashant Choudhary) am writing my code  of bubble sorting on 21 october but putting this in the file of 15 october as i was unable to do it at that time feeling somewhat sorry for that.
// in this bubble sort
// Algorithm is here
/*
    1. We have to take an array which has an unordered list.
    2. In this, we will  start the loop from i = 1 upto n .
    3. Then we will compare it from the j=i upto n such that the element is smaller or greater
    4. If it is greater then swap the elements.
    5. Else increase the loop to the next.
*/
#include<iostream>
using namespace std;
int main()
{
    int size ;
    cout<<"Enter the size of the element"<<endl;
    cin>>size;

    int arr[size];
    cout<<"Enter the elements of the array"<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
    cout<<"Sorted Array:";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }

    
    
    
}