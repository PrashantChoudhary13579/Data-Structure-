#include<iostream>
using namespace std;

int main(){
    // for 1D array
    int arr[4]={2,4,5,7};
    int *ptr;
    ptr=&arr[0]; // Secondly we can use ptr=arr for storing the first element 

    for (int i = 0; i < 4; i++)
    {
        cout<<"Address at ptr = "<<ptr[i]<<"  "<<endl;
         cout << "Value at *ptr = " << *ptr <<endl;
        ptr++;
    }
    // for 2D array;          *(*(nums+i)+j) 


    int array1[2][2]={{2,3},{4,5}};
    int *array2[2][2];
    // storing the address of the array1 into another array 
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            array2[i][j] = & array1[i][j];
        }   
    }
    // printing the value of the address of the array1.
    cout<<"Address "<<endl;
     for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout<<"Value   "<<i+j<<"  - "<<array1[i][j]<<endl;
           cout<<"Address "<<i+j<<" -  "<< array2[i][j]<<endl;
        }   
    }
    
    
    return 0;
}