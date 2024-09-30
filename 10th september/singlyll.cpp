// Date - 27 September 2024
#include<iostream>
using namespace std;
struct Node {
    int data;
    Node * next;
    Node (int d)
    {
        this -> data = d;
        this -> next = nullptr;
    }
};
void traversing(Node * head)
{
    Node * node1 = head;
    while (node1!=nullptr)
    {
        cout<< node1->data << "  ";
        node1 = node1->next;
    }
    cout<<endl;
}
bool searching(Node * head , int target)
{
    Node * node1 = head;
    while (node1 != nullptr)
    {
        if(node1->data == target)
        {
        return true;
        }
        node1 = node1->next;
    } 
    return false;
}
int length(Node * head)
{
    Node * node1 = head;
    int l=0;
    while(node1 != nullptr)
    {
        l++;
        node1 = node1->next;
    }
    return l;
}
Node * insertionAtBegin(Node * head, int d)
{
    // creating a new node ;
    Node * node1 = new Node (d);
    // now adding this to the head position;
    node1 -> next = head;
    head = node1 ;
    return head;
}
Node * insertionAtLast(Node * head, int d)
{
    // creating a new node;
    Node * newnode = new Node (d);
    // now adding the node at the last/end position ;
    if (head == nullptr)
    {
        return newnode;
    }
    Node * node1 = head;
    while (node1-> next != nullptr)
    {
        node1 = node1->next;
    }
    node1->next = newnode;
    return head;
}

Node * insertionAtPosition(Node * head, int pos, int data)
{
    // creating a node
       Node * temp = new Node (data);

    // position less than 1
    if (pos<1)
    {
        cout<<"Invalid Position"<<endl;
        return head;
    }
    // special case for inserting at the head
    if (pos == 1)
    {
        temp->next  = head;
        head = temp;
        return head;
    }
    int i=2;
    Node * p = head;
    Node * s = p -> next;
    while ((i != pos) && (s != nullptr))
    {
        p = s;
        s = s->next;
        i++;
    }
    p->next = temp;
    temp->next =s ;
    return head;
}

Node * deletingfromBegin(Node * head )
{
    // need to change the position of the head
    Node * node1 = head;
    head = node1->next;
    delete node1;
    return head;
}
Node * deletingfromEnd(Node * head)
{
    Node * node1 = head;
    while (node1->next ->next != nullptr)
    {
        node1 = node1->next;
    }
    delete(node1->next ); 
    node1->next = nullptr;
    return head;
}
Node * deletingfromPosition(Node * head,int pos)
{
    if (pos< 1)
    {
        cout<<"Invalid Position"<<endl;
    }
    if (pos == 1)
    {
        Node * node1 = head;
        head = node1->next ;
        delete node1;
        return head;
    }
    int i=2;
    Node * p = head;
    Node * s = head->next;
    while ((i!=pos) && (s != nullptr))
    {
        i++;
        p=s;
        s=s->next;
    }
    if (s == nullptr)
    {
        cout<<"Position out of bound"<<endl;
        return head;
    }
    
    p->next = s->next;
    delete s;
    return head;
}

int main()
{
    // adding 3 values to node by making 3 nodes
    Node * head = new Node(10);
    head->next = new Node (20);
    head -> next -> next = new Node (30);
    // traversing through the nodes
    traversing(head);
    // searching the target through the nodes
    int s = searching(head,40);
    if (s==1)
    {
        cout<<"Element is present"<<endl;
    }
    else
    {
        cout<<"Element is absent"<<endl;

    }
    //finding the number of the nodes in the linked list
    cout << "Length of the linked list = " << length(head) << endl;
    // now inserting the node at the head/first position
    Node * head1 = insertionAtBegin(head,40);
    // printing/traversing the new node after insertion
    traversing(head1);
     // now inserting another node at the head/first position
    Node * head2 = insertionAtBegin(head1,50);
    // printing/traversing the new node after insertion
    traversing(head2);

     // now inserting the node at the last position
    Node * head3 = insertionAtLast(head2,60);
    // printing/traversing the new node after insertion
    Node * temp= new Node (10);
    traversing(head3);
    Node * head4 = insertionAtPosition(head3 , 4,70);
    traversing(head4);
    Node * head5 = deletingfromBegin(head4);
    traversing(head5);
    Node * head6 = deletingfromEnd(head5);
    traversing(head6);
    Node * head7 = deletingfromPosition(head6,4);
    traversing(head7);
    
    // Node * head
}