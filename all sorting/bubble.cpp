 // Here is the code for the bubble sort.
 /*
 
 Algorithm:

1.Traverse the array from the first element to the last.
2.Compare adjacent elements and swap them if they are in the wrong order.
3.Repeat this process for n-1 passes, where n is the size of the array.

Time Complexity : O(n^2)
Space Complexity : O(1)

 */

 #include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
    return 0;
}
