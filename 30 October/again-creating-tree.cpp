// In this type of tree, something is happening that is whenever u are inserting the value it is inserted from the starting root node and then it is asking whether to go left or right . (Ig)

#include <iostream>
#include <string>
using namespace std;
struct node
{
    int data;
    node *parent;
    node *left;
    node *right;
    node(int value)
    {
        data = value;
        parent = NULL;
        left = NULL;
        right = NULL;
    }
    // node(int value) : data(value), left(NULL), right(NULL) {}
};
void CreateNode(struct node *&p)
{
    if (p == NULL)
    {
        int value;
        cout << "Enter the root value = ";
        cin >> value;
        p = new node(value);
    }
}
void InsertingNode(struct node *&p, int value)
{
    string choose;
    cout << "Do you want insert the value on left ? (y/n)" << endl;
    cin >> choose;
    if (choose == "y")
    {
        if (p->left != NULL)
        {
            InsertingNode(p->left, value);
        }
        else
        {
            p->left = new node(value);
            p->left->parent = p;
        }
    }
   if (choose == "n")
   {
         string tell;
    cout << "Do you want insert the value on right ? (y/n)" << endl;
    cin >> tell;
    if (tell == "y")
    {
        if (p->right != NULL)
        {
            InsertingNode(p->right, value);
        }
        else
        {
            p->right = new node(value);
            p->right->parent = p;
        }
    }
}
   
    // else
    // {
    //     cout << "Invalid Choice.Please enter 'y' or 'n'." << endl;
    // }
    
}
// Pre-order Traversal (Root, Left, Right)
void preOrderTraversal(node *p)
{
    if (p == NULL)
        return;

    cout << p->data << " -> ";
    preOrderTraversal(p->left);
    preOrderTraversal(p->right);
}
int main()
{
    struct node *root = NULL;
    CreateNode(root);
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    for (int i = 0; i < 7; i++)
    {
        InsertingNode(root, arr[i]);
    }
    cout << "Pre-order Traversal: ";
    preOrderTraversal(root);
    cout << endl;
    return 0;
}