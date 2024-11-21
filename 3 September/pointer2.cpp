#include<iostream>
using namespace std;

int main(){
    // for 1D array
    int arr[4] = {2, 4, 5, 7};
    int *ptr;
    ptr = &arr[0]; // We can also use ptr = arr

    for (int i = 0; i < 4; i++) {
        cout << "Address at ptr = " << ptr << "  " << endl;
        cout << "Value at *ptr = " << *ptr << endl;
        ptr++;
    }

    // for 2D array
    int array1[2][2] = {{2, 3}, {4, 5}};
    int *array2[2][2];

    // Storing the address of array1 into another array
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            array2[i][j] = &array1[i][j];
        }   
    }

    // Printing the value and address of array1
    cout << "Values and Addresses in array1:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Value at array1[" << i << "][" << j << "] = " << array1[i][j] << endl;
            cout << "Address of array1[" << i << "][" << j << "] = " << array2[i][j] << endl;
        }   
    }

    return 0;
}
