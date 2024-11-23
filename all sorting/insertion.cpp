// Here is the code of insertion code written by the Prashant Choudhary while learning DSA.
/*
Algorithm:

1. Start with the second element (index 1).
2. Compare it with elements in the sorted portion to its left.
3. Shift larger elements one position to the right and insert the current element in the correct position.
4. Repeat for all elements.

Time Complexity: O(n^2)
Space Complexity: O(1)
 
*/

#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    cout << "Sorted Array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
