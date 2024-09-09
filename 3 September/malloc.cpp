// learning about malloc function
#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    // int * ptr1,*ptr2;
    // int n, i;
    // cout<<"Enter the element "<<endl;
    // cin>>n>>i;
    // // dynamically allocating the memory using malloc()

    // ptr1=(int *)malloc(n*sizeof(int));
    // ptr2=(int *)malloc(i*sizeof(int));
    // // memory not allocated
    // if (ptr1= NULL )
    // {
    //     cout<<"Memory not allocated "<<endl;
    //     exit(0);
    // }
    // // memory  allocated
    // else{
    //     cout<<"Memory allocated successfully "<<endl;
    //     cout<<ptr1<<endl;
    //     cout<<ptr2<<endl;   
    // }

    int num,*ptr;
    cout<<"Number - "<<endl;
    cin>>num;
    // int arr[5];
    // dynamically allocating the memory for n numbers
     ptr = (int* )malloc(num*sizeof(int));
    if (ptr=NULL)
    {
        cout<<"Memory not allocated."<<endl;
    }
    else
    {
        cout<<"Memory allocated successfully "<<endl;
        for (int i = 0; i < 15; i++)
        {
            ptr[i]=i+1;
           cin >> *(ptr+i);
        //    ptr+=4;
        }
        for (int i = 0; i < num; i++)
        {
            cout<<*(ptr+i)<<"  ";
        }
    }
    










/*
    // Applying the malloc function on 2d array
    int arr1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
   int* arr2 = malloc(3 * sizeof(int*));
    int i;
    for ( i = 0; i < 3; i++)
        arr2[i] = malloc(3 * sizeof(int*));
 
    // Initialising each element of the
    // pointer array with the address of
    // element present in the other array
    int j;
    for (i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            arr2[i][j] = &arr1[i][j];
        }
    }
 
    // Printing the array using
    // the array of pointers
    cout<<"The values are\n";
    for (i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
         cout<< *arr2[i][j] ;
        }
      cout<<endl;
    }
    
    */
    
    return 0;
}