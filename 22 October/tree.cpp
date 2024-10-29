// here I (Prashant Choudhary) is creating a tree using nodes
/*
1. for this we have to make a node first using struct.
2. then we have to make a constructor which completly make a node
3. then we have to create a function which contains some values like
4. memory allocation , then we will use a if statement which ask as whether we have to assign the values to left or to right
*/
#include <iostream>
using namespace std;
struct node
{
    int value;
    node *left, *right;
};
void printPreorder(node * parent)
{
    if(parent == nullptr)
    return ;
    cout<<parent->value<<" -> ";
    printPreorder(parent->left);
    printPreorder(parent->right);
}
void create(node *parent)
{
    // node * left = nullptr;
    // node * right = nullptr;
    // giving values
    if (parent == nullptr)
    {
        int value;
        parent = new node;
        cout << "Enter the value " << endl;
        cin >> parent->value;
        parent->left = nullptr;
        parent->right = nullptr;
    }

    // going to the left node
    string choice;
    cout << "Do you want to enter this at left ? (y/n)" << endl;
    cin >> choice;
    if (choice == "y")
    {
         create(parent->left);
    }
    // goint to the right node
    cout << "Do you want to enter this at right? (y/n)" << endl;
    cin >> choice;
    if (choice == "y")
    {
         create(parent->right);
    }
    printPreorder(parent);

}


int main()
{
    node *parent = nullptr;
    create(parent);
    
    // node *newnode = new node (5);
    // cout<<newnode->value;
}
