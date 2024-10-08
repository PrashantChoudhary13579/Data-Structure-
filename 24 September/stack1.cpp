// Following program shows the implementation of stack in c++;
#include<iostream>
#include<stdbool.h>
#define MAX_SIZE 100
using namespace std;

 struct Stack{
    int arr[MAX_SIZE];
    int top;
};
void initialize (Stack * stack)
{
    stack->top = -1;
}
bool isEmpty(Stack * stack )
{
    return stack->top == -1;
}
bool isFull(Stack * stack)
{
    return stack->top == MAX_SIZE-1;
}
void push (Stack * stack , int value)
{
    if (isFull(stack))
    {
        cout<<"Stack is overflow"<<endl;
    }
    stack->arr[++stack->top] = value;
    // cout<< "Value at top "<<value;
    
}
int pop (Stack * stack)
{
    if (isEmpty(stack))
    {
        cout<<"Stack is underflow "<<endl;
        return -1;
    }
    int popped = stack->arr[stack->top];
    stack->top--;
    return popped;
}
int main()
{
    Stack stack;
    initialize(&stack);
    
    // pushing 1st;
    push (& stack , 3);
    push (& stack , 5);
    push (& stack , 7);
    
    // poping all 
    while (!(isEmpty(&stack)))
    {
        cout<<pop(&stack)<<"  ";
    }
    
}