#include <iostream>
#include <algorithm>
#include<stdlib.h>
using namespace std;
// function for displaying the elements 
void display(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}
// function for sorting 
void sorting(int arr[], int size)
{
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }   
        }   
    }
    display(arr,size);
}
// function for searching the elements
int search(int arr[], int n, int key)
{
    int low = 0;
    int high = n - 1;
    int mid = low + (high - low) / 2;
    while (low <= high)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
        mid = low + (high - low) / 2;
    }
    return -1;
}
// function for inserting the element
void insert(int arr[], int p, int value, int index)
{
    arr[p-1] = arr[index];
    arr[index] = value;
    display(arr,p);
    sorting(arr,p);
}

// function for deleting the element
void deleteValue(int arr[],int p, int value)
{
    int index = search(arr,p,value);
    cout<<index<<endl;
    for (int i = index; i < p-1; i++)
    {
        arr[i]=arr[i+1];
    }
    sorting(arr,p);
}

void updating(int arr[],int size , int position, int newElement)
{
    if(position>=0 && position <size)
    {
        arr[position]=newElement;
        sorting(arr,size);
       
    }
    else{
        cout<<"Invalid position !"<<endl;
    }
}
void clearing(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i]=0;
    }
    display(arr,size);
}

int main()
{
    // For Ordered list
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
        cout << endl;
    }
    int t;
    char ch;
    // Implementing the switch case
    do
    {
        cout << "Enter 1 for search " << endl;
        cout << "Enter 2 for insert " << endl;
        cout << "Enter 3 for delete " << endl;
        cout << "Enter 4 for clear " << endl;
        cout << "Enter 5 for sort " << endl;
        cout << "Enter 6 for display " << endl;
        cout << "Enter 7 for updating"<<endl;
        cout << "Enter 8 fro Exit" << endl;

        cout << "Enter the operation - " << endl;
        cin >> t;

       do
       {
           switch (t)
        {
        case 1:
            // Search an element;
            int key;
            cout << "Enter the key you want to search " << endl;
            cin >> key;
            cout << "Key is at index " << search(arr, p, key) << endl;

            break;
        case 2:
            // Inserting an element;
            int value, index;
            cout << "Enter the value you want to insert " << endl;
            cin >> value;
            cout << "At what index you want to insert the value" << endl;
            cin >> index;
            p = p + 1;
            cout << p << endl;
            insert(arr, p, value, index);
            break;
        case 3:
            // Deleting the elements
            int value1;
            cout<<"Enter the value you want to delete ";
            cin>>value1;
            deleteValue(arr,p,value1);
            break;
        case 4:
            // Clearing all the elements
            cout<<"After deleting all the elements - ";
            clearing(arr,p);
            
            break;
        case 5:
            // sorting all the elements
            cout<<"Sorted array - ";
            sorting(arr,p);
            break;
        case 6:
            // Displaying the array
            cout<<"Here are the elements - ";
            cout<<endl;
            display(arr,p);
            break;
        case 7:
            // Updating the array
            int newElement,position;
            cout<<"Enter the element for updation - ";
            cin>>newElement;
            cout<<"Enter the position  ";
            cin>>position;
            updating(arr,p,position,newElement);
            break;
        case 8:
            cout<<"Exiting";
            break;
        default:
            cout << "Invalid Choice. Please try again. " << endl;
            break;
        }
        cout<<"Enter any key except a for menu "<<endl;
        cin>>ch;

       } while (ch =='a');
       
    } while (t != 8);

    // now inserting the element

    return 0;
}