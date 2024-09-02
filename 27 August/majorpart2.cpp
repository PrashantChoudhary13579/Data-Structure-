#include <iostream>
using namespace std;
void Row_major(int a, int b, int n)
{
    n = n - 1;
    int base_add = 100; // base address
    int w = 4;          // storage size of one element
    int row_index = 0, column_index = 0;
    int number = n - column_index + 1;
    int address = 0;
    address = base_add + w * ((a - row_index) * number + (b - column_index));
   cout << "Element is : " << number << endl;
    cout << "Base Address : " << base_add << endl;
    cout << "Address of Element : " << address << endl;
}
void Column_major(int a, int b, int m)
{
    m = m - 1;
    int base_add = 100; // base address
    int w = 4;          // storage size of one element
    int row_index = 0, column_index = 0;
    int number = m - row_index + 1;
    int address = 0;
    address = base_add + w * ((b - column_index) * number + (a - row_index));
    cout << "Element is : " << number << endl;
    cout << "Base Address : " << base_add << endl;
    cout << "Address of Element : " << address << endl;
}

int main()
{

    int m, n;
    cout << "Enter the size of row and col" << endl;
    cin >> m >> n;
    int p = m * n;
    int array[m][n];
    int arr[p], brr[p];
    int k = 0, l = 0;
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
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            brr[l] = array[j][i];
            l++;
        }
    }

    int a, b;
    cout << "Enter the row - " << endl;
    cin >> a;
    cout << "Enter the column - " << endl;
    cin >> b;
    // cout<<"Element is : "<<array[a][b]<<endl;
    int key = array[a][b];
    int num;
    cout << "Enter 1 for row major " << endl;
    cout << "Enter 2 for column major" << endl;
    cin >> num;
    if (num == 1)
    {
        cout << "2D Array converted into 1D Array - " << endl;
        for (int i = 0; i < p; i++)
        {
            cout << arr[i] << "  ";
        }
        cout << endl;

        Row_major(a, b, n);
        cout << endl;
    }
    if (num == 2)
    {
        for (int i = 0; i < p; i++)
        {
            cout << brr[i] << "  ";
        }
        cout << endl;

        Column_major(a, b, m);
    }

    return 0;
}