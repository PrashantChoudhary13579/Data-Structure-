// learning about how to insert in binary tree
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
node *inserting(node *root, int value)
{
    if (root == nullptr)
    {
        root = new node(value);
        return root;
    }
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp->left == nullptr)
        {
            temp->left = new node(value);
            break;
        }
        else
        {
            q.push(temp->left);
        }
        if (temp->right == nullptr)
        {
            temp->right = new node(value);
            break;
        }
        else
        {
            q.push(temp->right);
        }
    }
    return root;
}
void levelOrdertraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(nullptr);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        
        if (temp == nullptr)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(nullptr);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left != nullptr)
                q.push(temp->left);
            if (temp->right != nullptr)
                q.push(temp->right);
        }
    }
}
int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(5);

    cout << "Level order traversal before insertion" << endl;
    levelOrdertraversal(root);
    cout << endl;
    int value;
    cout << "Enter the value you want to insert " << endl;
    cin >> value;
    node *roots = inserting(root, value);

    cout << "Level order traversal after insertion" << endl;
    levelOrdertraversal(roots);
    cout << endl;

    return 0;
}