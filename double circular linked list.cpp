#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

Node* insert(Node* head, int data) {
    Node* newNode = new Node{data, nullptr, nullptr};
    if (!head) {
        newNode->next = newNode->prev = newNode;
        return newNode;
    }
    Node* tail = head->prev;
    newNode->next = head;
    newNode->prev = tail;
    tail->next = newNode;
    head->prev = newNode;
    return head;
}

void display(Node* head) {
    if (!head) return;
    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

int main() {
    Node* head = nullptr;
    head = insert(head, 10);
    head = insert(head, 20);
    head = insert(head, 30);
    display(head);
    return 0;
}
