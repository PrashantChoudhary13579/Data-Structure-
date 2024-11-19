#include<iostream>
using namespace std;

int iterative(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i; // Return the index if the key is found
        }
    }
    return -1; // Return -1 if the key is not found
}

int recursive(int arr[], int size, int key)
{
    if (size == 0) // Base case: if size is 0, the element is not found
    {
        return -1;
    }
    if (arr[size - 1] == key) // Check if the key is found
    {
        return size - 1;
    }
    else
    {
        return recursive(arr, size - 1, key); // Recursively call for the remaining array
    }
}

int main()
{
    int n;
    int arr[5] = {1, 2, 3, 6, 5}; // Sample array
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Enter 1 for linear search using iterative method" << endl;
    cout << "Enter 2 for linear search using recursive method" << endl;
    cin >> n;

    cout << "Enter the number you want to search: " << endl;
    int num;
    cin >> num;

    if (n == 1)
    {
        int y = iterative(arr, size, num);
        if (y != -1)
        {
            cout << "The number is at index " << y << " using iterative method." << endl;
        }
        else
        {
            cout << "The number is not found using iterative method." << endl;
        }
    }
    else if (n == 2)
    {
        int z = recursive(arr, size, num);
        if (z != -1)
        {
            cout << "The number is at index " << z << " using recursive method." << endl;
        }
        else
        {
            cout << "The number is not found using recursive method." << endl;
        }
    }
    else
    {
        cout << "Sorry, invalid option." << endl;
    }

    return 0;
}
