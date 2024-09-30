#include<iostream>
using namespace std;
// making the structure 
struct node{
    int data;
    node * next ;
    node * prev ;
    node(int d)
    {
        this->data = d;
        this->next = prev =nullptr;
    }
};
// making a traverse function in forward dir
void traversing_forward (node * head)
{
    node * temp = head;
    while (temp!= nullptr)
    {
        cout<<temp->data<<"  ";
        temp = temp->next;
    }
    cout<<endl;
}
// making a traverse function in a backward dir
void traversing_backward(node * tail)
{
    node * temp = tail;
    while (temp != nullptr)
    {
        cout<< temp->data <<"  ";
        temp = temp->prev;
    }
    cout<<endl;
}
// finding the length of the double linked list
int length(node * head )
{
    int count=0;
    node * temp = head;
    while (temp!= nullptr)
    {
        count++;
        temp = temp->next; 
    }
    return count;
}
node * insertion_AT_beginning(node * head , int d)
{
    // creating a new node
    node * node1 = new node (d);
    // adding at the starting position
    node1->next = head;
    head->prev = node1;
    return node1;
}
node * insertion_AT_end(node * head, int d)
{
    // creating a new node
    node * node1 = new node (d);
    // adding at the end
    node * temp = head;
    while (temp->next != nullptr)
    {
       temp = temp->next;
    }
    temp->next = node1;
    node1->prev = temp;
    return head;
}
node * insertion_At_position(node * head, int pos , int d)
{
    
}

int main()
{
    node * first = new node (10);
    node * second = new node (20);
    node * third = new node (30);

    first->prev = nullptr;
    first->next = second;
    second->prev = first;
    second->next = third;
    third->prev = second;
    third->next = nullptr;

    // insertion at the starting
    node * node1 = insertion_AT_beginning(first,40);
    traversing_forward(node1);
    //insertion at end
    node * node2 = insertion_AT_end(node1,50);
    traversing_forward(node2);
    // finding the length
    int l = length(first);
    cout<<"Length of the linkedlist = "<<l<<endl;
    // traversing
    traversing_forward( first);
    traversing_backward( third);

}