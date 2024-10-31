// Here i am writing this code on 30 October in which i am creating a tree and inserting the values in it as in the format of the tree.

#include <iostream>
#include <string>
using namespace std;
struct node
{
    int data;
    node *parent;
    node *left;
    node *right;
    node (int value)
    {
        data = value;
        parent = NULL;
        left = NULL;
        right = NULL;
    }
};

// Making the Create function
/*
struct node *CreateNode(node *p)
{
    if (p == NULL)
    {
        int value;
        cout << "Enter the node value " << endl;
        cin >> value;
        p->data = value;
        p->left = NULL;
        p->right = NULL;
        CreateNode(p);
    }

    int value;
    cout << "Enter the value you want to insert" << endl;
    cin >> value;

    // struct node *s = (struct node *)malloc(sizeof(struct node));
    struct node * s = new node (value);

    // Now asking in which side u want to insert either left or right
    string choose;
    cout << "Enter the value either left/right (l/r)" << endl;
    cin >> choose;


    if (choose == "l")
    {
        if (p->left != NULL)
        {
            CreateNode(p->left);
        }
        else
        {
            s->left = NULL;
            s->right = NULL;
            s->data = value;
            s->parent = p;
            CreateNode(s);
        }
    }
    else
    {
        if (p->right != NULL)
        {
            CreateNode(p->right);
        }
        else
        {
            s->left = NULL;
            s->right = NULL;
            s->data = value;
            s->parent = p;
            CreateNode(s);
        }
    }
    return;
}
*/
void InsertNode (node * &p , int value, string choose)
{
    if (choose =="y")
    {
        if (p->left == NULL)
        {
            p->left = new node (value);
            p->left ->parent = p;
        }
        else{
            InsertNode(p->left,value , choose);
        }
        
    }
    else if (choose =="n")
    {
        if (p->right == NULL)
        {
            p->right = new node (value);
            p->right->parent = p;
        
        }
        else
        {
            InsertNode(p->right,value , choose);
        }
        
    }
    else 
    {
        cout<<"Invalid choice . Enter 'y' or 'n' ."<<endl;
    }
}
void CreateNode (node * & root)
{
    if (root == NULL)
    {
        int value;
        cout<<"Enter the value of the root element"<<endl;
        cin>>value;
        root = new node (value);
        return;
    }
    int value;
    cout<<"Enter the value you want to insert :"<<endl;
    cin>>value;

    string choose;
    cout<<"Enter where to insert at left ? (y/n)";
    cin>>choose;

    InsertNode(root, value, choose);
    
}
void inOrderTraversal(node *p)
{
    if (p == NULL)
        return;

    inOrderTraversal(p->left);
    cout << p->data << " -> ";
    inOrderTraversal(p->right);
}
int main()
{
    struct node *root = NULL;
    int numnodes;
    cout<<"Enter the number of nodes to insert : ";
    cin>>numnodes;
    for (int i = 0; i < numnodes; i++)
    {
         CreateNode(root);
    }
    cout<<endl;
    cout << "In-order Traversal: ";
    inOrderTraversal(root);
    cout << endl;
    return 0;
   
}