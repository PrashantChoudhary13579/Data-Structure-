#include<iostream>
#include<queue>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node(int d) {
        this->data = d;
        this->next = nullptr;
    }
};
// insertion at end
Node* insertionAtLast(Node* head, int data) 
{
    Node* newnode = new Node(data);
    if (head == nullptr) {
        return newnode;
    }
    Node* node1 = head;
    while (node1->next != nullptr) {
        node1 = node1->next;
    }
    node1->next = newnode;
    return head;
}

// traversing/printing linked list
void traversing(Node* head) {
    Node* node1 = head;
    while (node1 != nullptr) {
        cout << node1->data << "  ";
        node1 = node1->next;
    }
    cout << endl;
}
// fn to get the max value
int getMax(Node* head) {
    int maxValue = head->data;
    Node* node1 = head;
    while (node1 != nullptr) 
    {
        if (node1->data > maxValue)
            {
                maxValue = node1->data;
            }
        node1 = node1->next;
    }
    return maxValue;
}

// getting the digits
int getDigit(int number, int digitPlace) {
    return (number / digitPlace) % 10;
}

// Function to perform counting sort based on the digit place
Node* countingSort(Node* head, int digitPlace) {
    // Create 10 buckets (queues) for digits 0-9
    queue<Node*> buckets[10];

    // Distribute nodes into buckets based on the digit at the current place
    Node* node1 = head;
    while (node1 != nullptr) {
        int digit = getDigit(node1->data, digitPlace);
        buckets[digit].push(node1);
        node1 = node1->next;
    }

    // Collect nodes back from the buckets and reform the list
    Node* newHead = nullptr;
    Node* last = nullptr;

    for (int i = 0; i < 10; ++i) {
        while (!buckets[i].empty()) {
            Node* temp = buckets[i].front();
            buckets[i].pop();
            temp->next = nullptr; // Disconnect the node
            if (newHead == nullptr) {
                newHead = temp;
                last = temp;
            } else {
                last->next = temp;
                last = last->next;
            }
        }
    }
    return newHead;
}

// Radix Sort function to sort the linked list
Node* radixSort(Node* head) {
    // Find the maximum number to know the number of digits
    int maxValue = getMax(head);

    // Sort the list by each digit place (units, tens, hundreds, etc.)
    for (int digitPlace = 1; maxValue / digitPlace > 0; digitPlace *= 10) {
        head = countingSort(head, digitPlace);
    }
    return head;
}

int main() {
    // Initialize the linked list with unsorted values
    Node* head = nullptr;
    head = insertionAtLast(head, 170);
    head = insertionAtLast(head, 45);
    head = insertionAtLast(head, 75);
    head = insertionAtLast(head, 90);
    head = insertionAtLast(head, 802);
    head = insertionAtLast(head, 24);
    head = insertionAtLast(head, 2);
    head = insertionAtLast(head, 66);

    // Traversing the unsorted linked list
    cout << "Unsorted List: ";
    traversing(head);

    // Perform Radix Sort
    head = radixSort(head);

    // Traversing the sorted linked list
    cout << "Sorted List: ";
    traversing(head);

    return 0;
}
