// Here i (Prashant Choudhary) am writing my code  of insertion sorting on 21 october but putting this in the file of 15 october as i was unable to do it at that time feeling somewhat sorry for that.
// in this insertion sort
// Algorithm is here
/*
    1. We have to take an array which has an unordered list.
    2. In this, we will  start the loop from i = 2 upto n .
    3. Then we will compare it from the j=1 upto i-1 such that the element is smaller or greater
    4. If it is smaller then move the element from that place to the first place and shift all those values to the next.
    5. Else increase the loop to the next.
*/
#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of the array - " << endl;
    cin >> size;

    int arr[size];
    cout<<"Enter the elements of the array - "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // now applying the insertion sort
    int temp;
    for (int i = 1; i < size; i++)
    {
        temp = arr[i];
        int j = i - 1;
        while ( j >= 0 && arr[j] > temp)
        {
                arr[j + 1] = arr[j];
                j--;
            }
           arr[j+1] = temp;
        }
    cout<<"Sorted Array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}