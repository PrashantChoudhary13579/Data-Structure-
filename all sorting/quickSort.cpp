/*

1.Select an element from the array as the pivot.
2.Rearrange the array around the pivot.
3.All elements smaller than the pivot will be on its left, and all elements greater than the pivot will be on its right. 
4.The pivot is then in its correct position
5.Recursively apply the same process to the two partitioned sub-arrays
6.The recursion stops when there is only one element left in the sub-array 
*/

#include <bits/stdc++.h>
using namespace std;
int partition(vector<int>& arr, int low, int high) {

    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);  
    return i + 1;
}
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
      
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
int main() {
    vector<int> arr = {10, 7, 8, 9, 1, 5};
    int n = arr.size();
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}