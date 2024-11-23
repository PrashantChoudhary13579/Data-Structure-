#include <iostream>
#include<queue>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
node *buildTree(node *root)
{
    // getting the first value
    int data;
    cout << "Enter the node data " << endl;
    cin >> data;

    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter the data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter the data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);
}
void levelOrderTraversal(node * root)
{
    queue <node *> q;
    q.push(root);
    // q.push(NULL);
    while (!q.empty())
    {
        node * temp = q.front();
        cout<<temp->data <<" ";
        q.pop();

        if (temp->left != nullptr)
        {
            q.push(temp->left);
        }
        if (temp->right != nullptr)
        {
            q.push(temp->right);
        }   
    }
}
int main()
{
    node *root = NULL;
    // creating a tree
    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    cout<<"Printing the level order traversal output "<<endl;
    levelOrderTraversal(root);
    return 0;
}