// 1.  traversal in binary tree
// can be in two ways - dfs, bfs
// preorder - root - left - right
// inorder - left - root - right
// postorder- left - right - root
#include<iostream>
using namespace std;
struct node {
    int data ;
    node* left, * right;
    node (int d)
    {
        data = d;
        left = nullptr;
        right = nullptr;
    }
};
 void inorderdfs(node * node )
 {
    if (node == nullptr ) return;

    inorderdfs(node ->left);
    cout<<node ->data<<" ";
    inorderdfs(node ->right);
    
 }
void preorderDFS(node * node )
{
    if (node == nullptr)
    {
        return;
    }
    cout<<node->data<<" ";
    preorderDFS(node->left);
    
    
}