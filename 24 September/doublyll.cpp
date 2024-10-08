#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node *prev;
    node(int d)
    {
        this->data = d;
        this->next = nullptr;
        this->prev = nullptr;
    }
};
void traversing(node *head)
{
    node *newnode = head;
    while (newnode != nullptr)
    {
        cout << newnode->data << "  ";
        newnode = newnode->next;
    }
    cout << endl;
}
void searching(node *head, int target)
{
    node *temp = head;
    while (temp != nullptr)
    {
        if (temp->data == target)
        {
            cout << target << " is present" << endl;
        }
        temp = temp->next;
    }
    cout << endl;
}
int length(node *head)
{
    node *temp = head;
    int l = 0;
    while (temp != nullptr)
    {
        l++;
        temp = temp->next;
    }
    return l;
}
node *Insertion_At_Beginning(node *one, int value)
{
    node *node1 = new node(value);
    // insertion at beginning
    node1->next = one;
    one->prev = node1;
    one = node1;
    return one;
}
node *Insertion_at_last(node *one, int value)
{
    node *temp = one;
    node *node1 = new node(value);
    // insertion at last
    if (temp == nullptr)
    {

        temp = node1;
    }

    else
    {
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
    }
    temp->next = node1;
    node1->prev = temp;
    return one;
}
node *Insertion_At_anyPosition(node *one, int pos, int value)
{
    // int pos = pos;
    node *temp = one;
    node *node1 = new node(value);
    if (pos < 1)
    {
        cout << "Invalid position" << endl;
        return one;
    }
    if (pos == 1)
    {
        node1->next = temp;
        temp->prev = node1;
        return node1;
    }
    int i = 1;
    node *p = one;
    node *s = one->next;

    while ((i != pos - 1) && (s != nullptr))
    {
        p = s;
        s = s->next;
        i++;
    }
    node1->next = s;
    if (s != nullptr)
        s->prev = node1;
    p->next = node1;
    node1->prev = p;
    return one;
}
node *deleting_at_start(node *one)
{
    // deleting the first node
    node *temp = one;
    one = temp->next;
    delete (temp);
    return one;
}
node *deleting_at_end(node *head)
{
    // deleting the end node
    node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->prev->next = nullptr;
    delete temp;
    return head;
}
node * deleting_at_anyPosition(node * head,int pos)
{
    node * node1 = head;
    node * temp ;
    if (pos < 1 )
    {
        cout<<"Invalid Position"<<endl;
        return head;
    }
    if (pos == 1)
    {

        head = node1->next ;
        node1->prev = nullptr;
        delete node1;
        return head;
    }
    int i=1;
    node * p = head;
    node * s = head->next;
    while ((i != pos-1) && (s != nullptr) )
    {
        p = s;
        s = s->next;
        i++;
    }
    p->next = s->next;
    if(s->next != nullptr) s->next ->prev = p;
    return head;
}
int main()
{
    node *one = new node(10);
    node *two = new node(20);
    node *three = new node(30);
    one->next = two;
    two->prev = one;
    two->next = three;
    three->prev = two;

    traversing(one);
    searching(one, 30);
    int len = length(one);
    cout << "Length of the node - " << len << endl;
    node *node1 = Insertion_At_Beginning(one, 40);
    traversing(node1);
    node *node2 = Insertion_at_last(node1, 50);
    traversing(node2);
    node *node3 = Insertion_At_anyPosition(node2, 4, 60);
    traversing(node3);
    node *node4 = deleting_at_start(node3);
    traversing(node4);
    node *node5 = deleting_at_end(node4);
    traversing(node5);
     node *node6 = deleting_at_anyPosition(node5,3);
    traversing(node6);
}