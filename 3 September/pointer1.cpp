#include<iostream>
using namespace std;

int main(){
    int v=100;
    int *ptr;
    int **p;
    // stroing the address of v
    ptr=&v;
    // stroing the address of ptr in p
    p=&ptr;
    // This give the value of the variable 
    cout<<"Value of v " <<v<<endl;
    cout<<"Value of *ptr " <<*ptr<<endl;
    cout<<"Value of **p "<<**p<<endl;
    // This give the address of the variable 
    cout<<"Value of ptr " <<ptr<<endl;
    cout<<"Address of v "<<&v<<endl;
    cout<<"Value of *p "<<*p<<endl;
    // This gives the value of p /
    cout<<"Value of p " <<p<<endl;
    cout<<"Address of ptr "<<&ptr<<endl;
    
    
    
    return 0;
}