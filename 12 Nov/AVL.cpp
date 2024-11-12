#include <iostream>
#include <queue>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
    node(int d)
    {
        data = d;
        left = right = nullptr;
    }
};
void insertionInAVL(node *root, int value)
{
    if (root->data > value)
    {
        if (root->left != NULL)
        {
            insertionInAVL(root->left, value);
        }
        else
        {
            node *node1 = new node(value);
            root->left = node1;
        }
    }
    else
    {
        if (root->right != NULL)
        {
            insertionInAVL(root->right, value);
        }
        else
        {
            node *node1 = new node(value);
            root->right = node1;
        }
    }
}
void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    // q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();
        cout << temp->data << " ";
        q.pop();

        if (temp->left)
        {
            q.push(temp->left);
        }
        if (temp->right)
        {
            q.push(temp->right);
        }
    }
}
int LSTHeight(node *root, int h)
{
    int height = h;
    if (root->left != nullptr)
    {
        height++;
        balancefactor(root->left);
    }
    else
        return height;
}
int RSTHeight(node *root, int h)
{
    int height = h;
    if (root->right != nullptr)
    {
        height++;
        balancefactor(root->right);
    }
    else
        return height;
}
int balancefactor(node *root)
{
    int left = LSTHeight(root, 0);
    int right = RSTHeight(root, 0);
    int BF = left - right;
    if (BF >2 ||BF <2)
    {
        balancefactor(root->left);
        balancefactor(root->right);
    }
    else
    {
        creatingAVLagain(root);
    }
    
    return BF;
}
void creatingAVLagain(node *root)
{
    // checking whether it is left-left-case
    if (root->left )
    {
        
    }
    
   
}
int main()
{
    node *root = new node(100);
    root->left = new node(50);
    root->right = new node(200);
    root->left->left = new node(10);
    root->left->right = new node(70);
    root->left->left->left = new node(5);
    root->left->left->right = new node(30);
    int val;
    cout<<"Enter the value "<<endl;
    cin>> val;
    insertionInAVL(root, val);
    levelOrderTraversal(root);
}