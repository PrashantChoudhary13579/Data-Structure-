// Here is the program for selection sorting .
/*
    In this we have to do a simple thing that is we will select the element at index = 0 and swap it with the smallest
    element of the remaining array and after this we will increase the index from 0 to 1 and the process goes on upto the second last element is filled in it.
*/
#include <iostream>
using namespace std;
void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int m = arr[i];
        int n = arr[i + 1];
        for (int j = i + 1; j < size; j++)
        {

            if (arr[i] < arr[j])
            {
                n = arr[i];
            }
        }
        if (m > n)
        {
            swap(m, n);
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
int main()
{
    int arr[5] = {4,7,9,3,5};
    selectionSort(arr,5);
    return 0;
}