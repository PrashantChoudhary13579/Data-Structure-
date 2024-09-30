#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev;
    Node (int d)
    {
        this -> data = d;
        this -> next = nullptr;
        this -> prev = nullptr;
    }
};
// traversing
void traversing(Node *head)
{
    Node *node1 = head;
    while (node1 != nullptr)
    {
        cout << node1->data << "  ";
        node1 = node1->next;
    }
    cout << endl;
}

Node * insertionAtBegin(Node *head, int d)
{
    Node *node1 = new Node(d);
    if (head != nullptr)
    {
        head->prev = node1;
    }
    node1->next = head;
    head = node1;
    return head;
}

Node * insertionAtLast(Node *head, int d)
{
    Node *newnode = new Node(d);
    if (head == nullptr)
    {
        return newnode;
    }
    Node *node1 = head;
    while (node1->next != nullptr)
    {
        node1 = node1->next;
    }
    node1->next = newnode;
    newnode->prev = node1;
    return head;
}

Node * insertionAtPosition(Node *head, int pos, int data)
{
    Node *temp = new Node(data);
    if (pos < 1)
    {
        cout << "Invalid Position" << endl;
        return head;
    }
    if (pos == 1)
    {
        temp->next = head;
        if (head != nullptr) head->prev = temp;
        head = temp;
        return head;
    }
    int i = 2;
    Node *p = head;
    Node *s = p->next;
    while ((i != pos) && (s != nullptr))
    {
        p = s;
        s = s->next;
        i++;
    }
    temp->next = s;
    if (s != nullptr) s->prev = temp;
    p->next = temp;
    temp->prev = p;
    return head;
}

Node * deletingfromBegin(Node *head)
{
    if (head == nullptr) return nullptr;
    Node *node1 = head;
    head = node1->next;
    if (head != nullptr) head->prev = nullptr;
    delete node1;
    return head;
}

Node * deletingfromEnd(Node *head)
{
    if (head == nullptr) return nullptr;
    Node *node1 = head;
    while (node1->next != nullptr)
    {
        node1 = node1->next;
    }
    if (node1->prev != nullptr)
    {
        node1->prev->next = nullptr;
    }
    else
    {
        head = nullptr;
    }
    delete node1;
    return head;
}

Node * deletingfromPosition(Node *head, int pos)
{
    if (pos < 1 || head == nullptr)
    {
        cout << "Invalid Position" << endl;
        return head;
    }
    if (pos == 1)
    {
        Node *node1 = head;
        head = node1->next;
        if (head != nullptr) head->prev = nullptr;
        delete node1;
        return head;
    }
    int i = 2;
    Node *p = head;
    Node *s = head->next;
    while ((i != pos) && (s != nullptr))
    {
        i++;
        p = s;
        s = s->next;
    }
    if (s == nullptr)
    {
        cout << "Position out of bound" << endl;
        return head;
    }
    p->next = s->next;
    if (s->next != nullptr) s->next->prev = p;
    delete s;
    return head;
}

int main()
{
    // Initializing a doubly linked list
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->prev = head;
    head->next->next = new Node(30);
    head->next->next->prev = head->next;

    // Traversing the list
    traversing(head);

    // Insertion and Deletion operations
    head = insertionAtBegin(head, 40);
    traversing(head);
    head = insertionAtLast(head, 50);
    traversing(head);
    head = insertionAtPosition(head, 3, 60);
    traversing(head);
    head = deletingfromBegin(head);
    traversing(head);
    head = deletingfromEnd(head);
    traversing(head);
    head = deletingfromPosition(head, 2);
    traversing(head);
    
    return 0;
}
