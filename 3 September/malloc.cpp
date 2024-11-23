#include <iostream>
#include <stdlib.h> // For malloc, calloc, free
using namespace std;

int main() {
    int *ptr1, *ptr2, *ptr3;
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    // Using malloc
    ptr1 = (int *)malloc(n * sizeof(int));
    if (!ptr1) {
        cout << "Memory allocation failed using malloc." << endl;
        return 1;
    }
    cout << "Memory allocated using malloc at address: " << ptr1 << endl;

    // Using calloc
    ptr2 = (int *)calloc(n, sizeof(int));
    if (!ptr2) {
        cout << "Memory allocation failed using calloc." << endl;
        return 1;
    }
    cout << "Memory allocated using calloc at address: " << ptr2 << endl;

    // Using new
    ptr3 = new int[n];
    cout << "Memory allocated using new at address: " << ptr3 << endl;

    // Freeing memory
    free(ptr1);
    free(ptr2);
    delete[] ptr3;

    cout << "Memory deallocated successfully." << endl;

    return 0;
}
