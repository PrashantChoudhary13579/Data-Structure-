#include <iostream>
using namespace std;

struct queue
{
    int *arr;
    int front, rear, capacity, currsize;

    queue(int v)
    {
        front = 0;
        rear = -1;
        capacity = v;
        currsize = 0;
        arr = new int[v];
    }
    void display(int arr[])
    {
        for (int i = 0; i < capacity; i++)
        {
            cout << arr[i] << "  ";
        }
        cout << endl;
    }
    void Enqueue(int arr[], int data)
    {
        if (rear == capacity - 1)
        {
            cout << "The queue is full" << endl;
        }
        arr[++rear] = data;
        
    }
    void Dequeue(int arr[])
    {
        if (front > rear)
        {
            cout << "It is empty";
        }
        int temp = arr[front];
        front++;
        // delete temp;

        
    }
};

int main()
{
    int arr[10] = {};
    int k = 0;
    queue q(7);
    q.display(arr);
    q.Enqueue(arr, 10);
    q.display(arr);

    q.Enqueue(arr, 20);
    q.display(arr);
    // q.Dequeue(arr);
    q.display(arr);

}