#include<iostream>
using namespace std;

int main(){
    
    int m, n;
    cout << "Enter the size of row and col" << endl;
    cin >> m >> n;
    int p = m * n;
    int array[m][n];
    int arr[p];
    int k = 0;
    cout << "Enter the elements of the array - " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> array[i][j];
            // Converting this 2D array into 1D array
            arr[k] = array[i][j];
            k++;
        }
    }
    for (int i = 0; i < p; i++)
    {
        cout << arr[i] << "  ";
        
    }
    // Rowmajor(array,p);
    
    return 0;
}