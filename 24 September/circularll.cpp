// Circular singly linked list
#include<iostream>
#include<stdlib.h>
using namespace std;
struct node {
    int data;
    node * next;
    
};
void traversingCS(node * tail)
{
    node* p = tail;
    while (p!= tail->next)
    {
        cout<<tail->data<<" ";
        tail = tail->next;
    }
    cout<<endl;
    
}
 node * addToEmpty(int data)
{
     node * temp = new node ;
    temp->data = data;
    temp->next = temp;
    return temp;
}
node * addToBegin(node * tail, int data)
{
    node * newp = new node;
    newp->data = data;
    newp->next = tail->next;
    tail->next = newp;
    return tail;
}


int main()
{
    node * tail = addToEmpty(34);
   node * tail1 = addToBegin(17);
    traversingCS(tail);
    // print(tail);

}