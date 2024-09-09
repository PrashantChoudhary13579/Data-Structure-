// linked list is the type of data structure 
/* why we need linked list ?
as we know that we can't increase the size of the array 
until we use vector. but using vector is not optimising 
whereas firstly linked list is a dynamic data structure 
where no memory location happens , grow/shrink run time 
secondly insertion and deletion in linked list is easy.

There is no need of continuous memory allocation, 
and it will work upon run time.

Types of linked list 
1. singly ll 2. doubly ll 3. circular ll 4. circular doubly ll



*/
#include<iostream>
using namespace std;

class node{
    public: 
    int data;
    node * next;
    // creating constructor
    node(int data)
    {
        this ->  data = data;
        this -> next = NULL;

    }
};

void insertAtHead (node * &head, int d)
{
    // creating new node
    node* temp =new node (d);
    temp -> next = head;
    head =temp;
}

void print (node * &head)
{
    node* temp= head;
    while(temp!=NULL)
    {
        cout<<temp -> data <<"  ";
        temp =  temp -> next;
    }
    cout << endl;
}

int main()
{
    node * node1 = new node(10);
    cout<< node1 ->data<< endl;
    cout<< node1 ->next <<endl;
    insertAtHead(node1,4);
    insertAtHead(node1,9);
    print(node1);
    return 0;
}