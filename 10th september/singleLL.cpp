// Here we are learning single linked list
// This is the starting of the single linked list with the help of an object of a class
#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};
void traverseLinkedlist(node *start)
{
    node *newnode = start;
    while (newnode != nullptr)
    {
        cout << newnode->data << "  ";
        newnode = newnode->next;
    }
    cout << endl;
}
void insertionatBeginning(node *head, int data)
{
    node *node1 = new node(data);
    node1->next = head;
    head = node1;
    traverseLinkedlist(head);
}
node *insertionatend(node *head, int data)
{
    node *newnode = new node(data);
    node *p = head;
    if (p == nullptr)
    {
        newnode->next = nullptr;
        p->next = newnode;
    }
    else
    {

        while (p != nullptr)
        {

            newnode->next = nullptr;
            p->next = newnode;
        }
    }
}
int main()
{
    node *head = new node(5);
    head->next = new node(10);

    traverseLinkedlist(head);
    insertionatBeginning(head, 15);

    return 0;
}