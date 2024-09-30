#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node(int d)
    {
        this->data = d;
        this->next = nullptr;
    }
};

void traversing(Node *head)
{
    if (head == nullptr) return;
    Node *node1 = head;
    do
    {
        cout << node1->data << "  ";
        node1 = node1->next;
    } while (node1 != head);
    cout << endl;
}

Node * insertionAtBegin(Node *head, int d)
{
    Node *node1 = new Node(d);
    if (head == nullptr)
    {
        node1->next = node1;
        return node1;
    }
    Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = node1;
    node1->next = head;
    head = node1;
    return head;
}

Node * insertionAtLast(Node *head, int d)
{
    Node *newnode = new Node(d);
    if (head == nullptr)
    {
        newnode->next = newnode;
        return newnode;
    }
    Node *node1 = head;
    while (node1->next != head)
    {
        node1 = node1->next;
    }
    node1->next = newnode;
    newnode->next = head;
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
        Node *last = head;
        while (last->next != head)
        {
            last = last->next;
        }
        temp->next = head;
        last->next = temp;
        head = temp;
        return head;
    }
    int i = 2;
    Node *p = head;
    while (i != pos && p->next != head)
    {
        p = p->next;
        i++;
    }
    temp->next = p->next;
    p->next = temp;
    return head;
}

Node * deletingfromBegin(Node *head)
{
    if (head == nullptr) return nullptr;
    if (head->next == head)
    {
        delete head;
        return nullptr;
    }
    Node *last = head;
    while (last->next != head)
    {
        last = last->next;
    }
    Node *node1 = head;
    head = node1->next;
    last->next = head;
    delete node1;
    return head;
}

Node * deletingfromEnd(Node *head)
{
    if (head == nullptr || head->next == head) return nullptr;
    Node *node1 = head;
    while (node1->next->next != head)
    {
        node1 = node1->next;
    }
    delete(node1->next);
    node1->next = head;
    return head;
}

Node * deletingfromPosition(Node *head, int pos)
{
    if (pos < 1 || head == nullptr) return head;
    if (pos == 1)
    {
        return deletingfromBegin(head);
    }
    int i = 2;
    Node *p = head;
    while (i != pos && p->next != head)
    {
        p = p->next;
        i++;
    }
    if (p->next == head)
    {
        cout << "Position out of bound" << endl;
        return head;
    }
    Node *toDelete = p->next;
    p->next = toDelete->next;
    delete toDelete;
    return head;
}

int main()
{
    // Creating a circular linked list
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head;

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
