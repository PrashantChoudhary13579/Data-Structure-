// here I (Prashant Choudhary ) is learning about the insertion in the binary tree 
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct node{
    int data;
    node * left , * right;
    node (int d)
    {
        data = d;
        left = right = nullptr;
    }
};
// insertion 
node * insert (node * root, int value)
{
    if(root == nullptr)
    {
        root = new node(value);
        return root;
    }
    queue <node*> q;
    q.push(root);

    while (!q.empty())
    {
        node * temp = q.front();
        cout<<temp->data<<" ";
        q.pop();

        if (temp->left == nullptr)
        {
            temp->left = new node(value);
            break;
        }
        else{
            q.push(temp->left);
        }
        if (temp->right == nullptr)
        {
            temp->right = new node (value);
            break;
        }
        else{
            q.push(temp->right);
        }
        
    }

return root;
}
// preorder =  root - left - right
void preorder(node * root)
{
    if (root == nullptr)
    {
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
    
}
int main()
{
    node * root = new node ( 2);
    root ->left = new node ( 3);
    root ->right = new node ( 4);
    root -> left -> left = new node ( 5);

    cout << "Preorder traversal before insertion: ";
    preorder(root);
    cout << endl;

    int key = 6;
    root = insert(root, key);

    cout << "Preorder traversal after insertion: ";
    preorder(root);
    cout << endl;

    return 0;
}