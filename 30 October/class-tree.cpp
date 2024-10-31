// Learning more about the binary tree 
#include<iostream>
#include<string>
using namespace std;
// first method -  we can made it with the help of struct 
struct node {
    int data;
    node * left;
    node * right;
    // or node * left, * right;
    // now making a constructor
    node (int value)
    {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};
// second method - using class
class Node {
public:
    int data;
    Node * left, * right;
    Node (int value)
    {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};
// In-order Traversal - left - root - right
void InOrderTraversal(node * p)
{
    if (p == nullptr)
    {
        return;
    }
    InOrderTraversal(p->left);
    cout<<p->data<<" -> ";
    InOrderTraversal(p->right);
    
}
// Pre-Order Traversal - root - left - right
void PreOrderTraversal(node * p)
{
    if (p == nullptr)
    {
        return;
    }
    cout<<p->data<<" -> ";
    PreOrderTraversal(p->left);
    PreOrderTraversal(p->right);
    
}
// Post-Order Traversal- left - right - root
void PostOrderTraversal(node * p)
{
    if(p == nullptr) return;
    PostOrderTraversal(p->left);
    PostOrderTraversal(p->right);
    cout<<p->data<<" -> ";
}
int main ()
{
    // here we are initializing and allocating the memory for tree nodes
    node * firstnode = new node (2);
    node * secondnode = new node (3);
    node * thirdnode = new node (4);
    node * fourthnode = new node (5);
    // now we are connecting binary tree nodes.
    firstnode->left = secondnode;
    firstnode->right = thirdnode;
    secondnode->left = fourthnode;
   

    // calling using inorder traversal 
    cout<<"In-Order Traversal : "<<endl;
    InOrderTraversal(firstnode);
    cout<<endl;
    // calling using Pre-Order traversal 
    cout<<"Pre-Order Traversal :"<<endl;
    PreOrderTraversal(firstnode);
    cout<<endl;
    // calling using Post-Order traversal 
    cout<<"Post-Order Traversal :"<<endl;
    PostOrderTraversal(firstnode);
     return 0;
    
}
// what do you mean by the child node ?
// Answer - a node that is descendant of another node