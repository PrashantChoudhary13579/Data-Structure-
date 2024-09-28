// here we are learning to perform some operations in
// the format of single linked list..
#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int d)
    {
        data = d;
        next = nullptr;
    }
};
void traverse(node *head)
{
    node *newnode = head;
    while (newnode != nullptr)
    {
        cout << newnode->data << "  ";
        newnode = newnode->next;
    }
    cout << endl;
}
// insertion at starting
// void insertathead(node *head, int value)
// {
//     // creating a new node
//     node *newnode = new node(value);
//     // pointing to the node at head
//     newnode->next = head;
//     head = newnode;
//     traverse(head);
// }
node * insertionAtHead(node * head , int value)
{
    // creating a new node
    node * node1 = new node (value);
    // pointing to the node at head
    node1->next = head;
    head = node1;
    return head;
}

node* insertAtTail(node *tail, int value)
{
    // creating a new node
    node *node1 = new node(value);
    // pointing to the node at tail
    if (tail == nullptr)
    {
        return node1;
    }
    
    node * current= tail;
    while(tail -> next != nullptr)
    {
        current = current->next;
    }
    current ->next = node1;
    return tail;
}
node * insertAtPosition(node *head, int pos, int value)
{
    // creating a new node
    node *newnode = new node(value);
    node *p;
    node *s;
    if (pos<1)
    {
        cout<<"Invalid Case"<<endl;
    }
    
    if (pos ==    1)
    {
        newnode->next = head;
        head = newnode;
    }
    else
    {
        int i = 1;
        s = head;
        while (i != pos  && s!=nullptr)
        {
            p = s;
            // head= head->next;
            s = s->next;
            i++;
        }
        p->next = newnode;
        newnode->next = s;
        return head;
    }
    // traverse(head);
}

int main()
{
    node *head = new node(5);
    node *tail = new node(5);
    head->next = new node(10);
    tail->next = new node(10);
    head->next->next = new node(15);
    tail->next->next = new node(15);
    traverse(head);
    insertionAtHead(head, 12);
    insertAtTail(tail, 20);
    insertAtPosition(head,3,34);
}