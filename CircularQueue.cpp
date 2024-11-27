#include <iostream>
using namespace std;

struct CircularQueue {
    int *arr;
    int front, rear, capacity;

    CircularQueue(int size) {
        capacity = size;
        front = rear = -1;
        arr = new int[size];
    }

    bool isFull() {
        return (rear + 1) % capacity == front;
    }

    bool isEmpty() {
        return front == -1;
    }

    void Enqueue(int data) {
        if (isFull()) {
            cout << "Queue is Full!" << endl;
            return;
        }
        if (front == -1) {
            front = 0;
        }
        rear = (rear + 1) % capacity;
        arr[rear] = data;
    }

    void Dequeue() {
        if (isEmpty()) {
            cout << "Queue is Empty!" << endl;
            return;
        }
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % capacity;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is Empty!" << endl;
            return;
        }
        int i = front;
        while (i != rear) {
            cout << arr[i] << " ";
            i = (i + 1) % capacity;
        }
        cout << arr[rear] << endl;
    }
};

int main() {
    CircularQueue q(5);
    
    q.Enqueue(10);
    q.Enqueue(20);
    q.Enqueue(30);
    q.Enqueue(40);
    q.Enqueue(50);
    
    q.display(); 

    q.Dequeue();
    q.Dequeue();
    
    q.display(); 

    q.Enqueue(60);
    q.display();
    
    return 0;
}
