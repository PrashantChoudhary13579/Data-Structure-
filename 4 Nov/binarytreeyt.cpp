// 1.  traversal in binary tree
// can be in two ways - dfs, bfs
// preorder - root - left - right
// inorder - left - root - right
// postorder- left - right - root
#include<iostream>
#include<queue>
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
    preorderDFS(node->right);
}
void postorderdfs(node * node )
{
    if(node == nullptr) return ;
    postorderdfs(node->left);
    postorderdfs(node->right);
    cout<<node->data<<" ";
}
void levelOrderTraversal (node * root)
{
    // in this type of travesal each level is printed
    queue <node*> q;
    q.push(root);
    
    while (!q.empty())
    {
        node * temp = q.front();
        q.pop();
        cout<<temp->data<<" ";
        if(temp->left != nullptr) 
        q.push(temp->left);
        if(temp->right!= nullptr)
         q.push(temp->right);
    }
}
int main()
{
    node * root = new node (1);
    root->left = new node (2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);

    // calling the functions one by one 
   
    preorderDFS(root); // 1 2 4 5 3
    cout<<endl;
    inorderdfs(root); // 4 2 5 1 3 
    cout<<endl;
    postorderdfs(root); // 4 5 2 3 1 
    cout<<endl;
    levelOrderTraversal(root); // 1 2 3 4 5
}