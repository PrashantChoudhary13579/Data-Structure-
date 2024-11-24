#include<iostream>
#include<queue>
using namespace std;
struct node {
    int data;
    node * left;
    node * right;
    node(int d)
    {
        this->data = d;
        this->left = nullptr;
        this->right = nullptr;
    }
};

node * insertionBST(node * root,int value)
{
    if (value < root->data ) // left side
    {
        if (root->left != nullptr)
        {
            return insertionBST(root->left,value);
        }
        else
        {
            root->left = new node (value);
        }
    }
    else
    {
        if (root->right != nullptr)
        {
            return insertionBST(root->right , value);
        }
        else
        {
            root->right = new node (value);
        }
    }
    return root;
}
// talking about traversal 
// inorder traversal
void inorder(node * root) // left - root - right
{
    if (root == nullptr)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data <<" ";
    inorder(root->right);
    
}
void postorder(node * root)  // left - right - root
{
    if(root == nullptr) return;
    postorder( root->left);
    postorder(root->right);
    cout<<root->data <<" ";
}
void preorder(node* root ) // root - left - right
{
    if(root == nullptr) return;
    cout<<root->data <<" ";
    preorder(root->left);
    preorder(root->right);
}
void BFTraversal(node * root) // part of a preorder traversal 
{
    if(root == nullptr) return;
    queue <node*> q;
    q.push(root);
    while(!q.empty())
    {
        node* temp = q.front();
        q.pop();
        cout<<temp->data <<" ";
        if(temp->left != nullptr) q.push(temp->left);
        if(temp->right != nullptr) q.push(temp->right);
    }
}
bool Searching(node * root, int key)
{

    if(root->data == key) return true;
   
    else
    {
        Searching(root->left, key);
        Searching(root->right, key);

    }
    return false;
}
node * FindMin(node * root)
{
    while ( root->left != nullptr)
    {
        root = root->left;
    }
    return root;
}
// Deleting a leaf node in BST
node* Delete(node* &root, int key)
{
    if(root == nullptr) return nullptr;

    if(key < root->data)
    {
        return Delete(root->left,key);
    }
    else if(key > root->data)
    {
        return Delete (root->right, key);
    }
    else
    {
        // 0 child
        if(root->left == nullptr && root->right == nullptr)
        {
            delete root;
            return nullptr;
        }
        // 1 child
        if(root->left == nullptr || root->right == nullptr)
        {
            return root->left == nullptr ? root->right : root->left;
        }
        // 2 child
        node * temp = FindMin(root->right);
        root->data = temp->data;
        root->right =  Delete(root->right , temp->data);
        return root;
    }
    return root;
}
int main()
{
    node* root = new node (50);
    root->left = new node (30);
    root->right = new node (70);
    root->left->left = new node (20);
    root->left->right = new node (40);
    root->right->left = new node (60);
    root->right->right = new node (80);
    node * root1 =  Delete (root,60);
    // node * root1 = insertionBST(root, 40);
    cout<<"Breath First Traversal: "<<endl;
    BFTraversal( root);
    // cout<<"Preorder Traversal: "<<endl;
    // preorder(root);
    // cout<<"Postorder Traversal: "<<endl;
    
    // postorder(root);
    // cout<<"Inorder Traversal: "<<endl;
    
    // inorder(root);
    cout<<endl;
    // if(insertionBST(root,40))
    // {
    //     cout<<"Is present"<<endl;
    // }
    // else cout<<"Is absent"<<endl;
    cout<<"Is present "<<Searching(root, 40)<<endl;


    return 0;

}