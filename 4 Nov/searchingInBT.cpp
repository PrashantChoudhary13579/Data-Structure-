// In this we are searching a value in the binary tree 
#include<iostream>
#include<queue>
using namespace std;
class node {
    public:
    int data;
    node * left;
    node * right;
    node (int d)
    {
        data = d;
        left = nullptr;
        right = nullptr;

    }
};
bool searching(node * root , int key )
{
    if (root == nullptr)
    {
        return false;
    }
    if (root->data == key)
    {
        return true;
    }
    bool left_res = searching(root->left, key);
    bool right_res = searching(root->right, key);
    return left_res || right_res;
}
int main()
{
    node * root = new node (1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(5);
    root->left->right = new node(6);
    root->right->left = new node(7);
    root->right->right = new node(8);
    int key;
    cout<<"Enter the key you want to search "<<endl;
    cin>>key;
    searching(root,key);

    if (searching(root,key))
    {
        cout<<key<<" is found in the binary tree"<<endl;
    }
    else{
        cout<<key <<" is not found in the binary tree"<<endl;
    }
    return 0;
}