//Here we are using a struct with an array arr[] to store elements and an integer top to track the current top of the stack. The operations are performed by defining methods within the struct.
#include<iostream>
// #include<stack>
using namespace std;
#define MAX_size 10
struct stack{
    int top;
    int arr[MAX_size];
    // constructor
    stack()
    {
        top = -1;
    }
    // functions

    bool push(int x);
    int pop();
    void peek();
    bool isEmpty();
};
bool stack::push(int x)
{
    if (top >= (MAX_size-1))
    {
        cout<<"Stack Overflow"<<endl;
        return false;
    }
    else{
        arr[++top] = x;
        return true;
    }
}
int stack::pop()
{
    if (top == -1)
    {
        cout<< "Stack underflow"<<endl;
        return -1;
    }
    else{
        return arr[top--];
    }
    
}
int main()
{
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    while (!st.isEmpty())
    {
        cout << st.peek();
    }
    
}
