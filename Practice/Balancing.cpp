#include<iostream>
#include<vector>
using namespace std;
struct node{
    int data;
    node * left , * right;
    node (int val)
    {
        data = val;
        left = right = nullptr;
    }
};
int inorder(node * root) // left - root- right
{

    if(root == nullptr) return;
    inorder(root->left);
    return root->data ;
    inorder(root->right);
}
// node * balancing(node * root, )
int main()
{
    node * root = new node (5);
    root->left = new node (4);
    root->left->left = new node (3);
    root->left->left ->left  = new node (2);
    root->right = new node (6);
    root->right->right = new node (7);
    root->right->right ->right = new node(8);

    int arr[10];
    for(int i=0;i<7 ;i++)
    {
        arr[i] = inorder(root);
    }
    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<" ";
    }
    // inorder(root);
}