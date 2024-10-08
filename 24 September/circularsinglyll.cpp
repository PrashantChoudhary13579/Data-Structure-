// singly circular linked list
// adding header files
#include <iostream>
#include <stdlib.h>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int d)
    {
        this->data = d;
        this->next = nullptr;
    }
};
node *insertionInEmpty(node *last, int value)
{
    if (last != nullptr)
    {
        return nullptr;
    }
    node *node1 = new node(value);
    node1->next = node1;
    last = node1;
    return last;
}
node *insertionAtBeginning(node *last, int value)
{
    node *node1 = new node(value);
    if (last == nullptr)
    {
        node1->next = node1;
        last = node1;
        return last;
    }
    if (last != nullptr)
    {
        node * head = last->next;
        last->next = node1;
        node1->next = head;
        return last;
    }
    
}
node * insertionAtEnd(node * last , int value)
{
    node * node1 = new node (value);
    if (last == nullptr)
    {
        node1->next = node1;
        last = node1;
        return last;
    }
    else{
        node * temp = last->next;
        last -> next = node1;
        node1-> next = temp; 
        last = node1;
        return last;
    }
    
    
}
void traversing (node * tail)
{
    if (tail == nullptr) return ;
    
    node * temp = tail->next;
   do
    {

        cout<<tail->data<<" ";
        tail = tail->next;
    } while (temp != tail->next);
    cout<<endl;
    
}
int main()
{
    node *first = new node(10);
    node *second = new node(20);
    node *last = new node(30);
    first->next = second;
    second->next = last;
    last->next = first;
    node * tail = nullptr;
    node * node1 = insertionInEmpty(tail,10);
    traversing (node1);
    node * node2 = insertionAtEnd(first,40);
    traversing (node2);
}