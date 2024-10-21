#include<iostream>
#include<stdio.h>
using namespace std;
struct queue {
    int * arr;
    int front;
    int back;
    int size;
};
int isfull(  queue* q)
{
    if (q->back == q->front)
    {
        
    }
    
}
void enqueue( queue * q , int value)
{

}

int main()
{
    queue q;
    int n;
    cout<<"Enter the size "<<endl;
    cin>>n;
    q.size = n;
    q.front = q.back = -1;
    q.arr = new 


}