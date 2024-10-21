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
    node *head = last->next;
    if (last == nullptr)
    {
        node1->next = node1;
        head = node1;
    }
    else
    {

        last->next = node1;
        node1->next = head;
        head = node1;
    }
    return head;
}
node *insertionAtEnd(node *last, int value)
{
    node *node1 = new node(value);
    if (last == nullptr)
    {
        node1->next = node1;
        last = node1;
        return last;
    }
    else
    {
        node *head = last->next;
        last->next = node1;
        node1->next = head;
        // last = node1;
        return head;
    }
}
node *insertion_AT_Specific(node *tail, int pos, int value)
{
    if ((tail == nullptr) && (pos < 1))
    {
        if (pos != 1)
        {
            cout << "Invalid Case" << endl;
            return tail;
        }
        node * newnode = new node (value);
        tail = newnode;
        tail->next = tail;
        return tail;
        
    }
    // creating a new node
        node *node1 = new node(value);
    // curr will point to head;
    node * curr = tail->next ;

    if (pos == 1)
    {
        node1->next = curr;
        tail->next = node1;
        return curr;
    }
    int i = 1;
    node * p = tail->next;
    node * s = p->next;
    while(i != pos)
    {
        curr = curr->next;
        if (curr == tail->next)
        {
            cout<<"invalid position "<<endl;
            return tail;
        }
        
    }
    node1 -> next = curr->next;
    curr->next = node1;
    if (curr == tail)
    {
        tail = node1;
        return tail;
    }
    
}
void traversing(node *tail)
{
    if (tail == nullptr)
        return;

    node *temp = tail->next;
    do
    {

        cout << tail->data << " ";
        tail = tail->next;
    } while (temp != tail->next);
    cout << endl;
}
int main()
{
    node *first = new node(10);
    node *second = new node(20);
    node *last = new node(30);
    first->next = second;
    second->next = last;
    last->next = first;
    node *tail = nullptr;
    traversing(first);
    node *node1 = insertionInEmpty(tail, 10);
    traversing(node1);
    node *node2 = insertionAtBeginning(last, 40);
    traversing(node2);
    node *node3 = insertionAtEnd(last, 50);
    traversing(node3);
    node *node4 = insertion_AT_Specific(tail,3, 60);
    traversing(node4);
}