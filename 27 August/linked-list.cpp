#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    // Function to insert a new node at the end
    void insert(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;

        if (!head) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Function to delete a node with a given value
    void deleteNode(int value) {
        if (!head) {
            cout << "List is empty.\n";
            return;
        }

        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* current = head;
        Node* prev = nullptr;

        while (current && current->data != value) {
            prev = current;
            current = current->next;
        }

        if (!current) {
            cout << "Value not found.\n";
            return;
        }

        prev->next = current->next;
        delete current;
    }

    // Function to update a node's data
    void update(int oldValue, int newValue) {
        Node* temp = head;
        while (temp && temp->data != oldValue) {
            temp = temp->next;
        }

        if (!temp) {
            cout << "Value not found.\n";
            return;
        }

        temp->data = newValue;
    }

    // Function to sort the linked list
    void sort() {
        if (!head || !head->next) return;

        Node* i = head;
        while (i) {
            Node* j = i->next;
            while (j) {
                if (i->data > j->data) {
                    swap(i->data, j->data);
                }
                j = j->next;
            }
            i = i->next;
        }
    }

    // Function to clear the linked list
    void clear() {
        while (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    // Function to display the linked list
    void display() {
        if (!head) {
            cout << "List is empty.\n";
            return;
        }

        Node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    LinkedList list;
    int choice, value, oldValue, newValue;

    do {
        cout << "\nLinked List Operations:\n";
        cout << "1. Insert\n";
        cout << "2. Delete\n";
        cout << "3. Update\n";
        cout << "4. Sort\n";
        cout << "5. Clear\n";
        cout << "6. Display\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                list.insert(value);
                break;
            case 2:
                cout << "Enter value to delete: ";
                cin >> value;
                list.deleteNode(value);
                break;
            case 3:
                cout << "Enter value to update: ";
                cin >> oldValue;
                cout << "Enter new value: ";
                cin >> newValue;
                list.update(oldValue, newValue);
                break;
            case 4:
                list.sort();
                cout << "List sorted.\n";
                break;
            case 5:
                list.clear();
                cout << "List cleared.\n";
                break;
            case 6:
                list.display();
                break;
            case 7:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 7);

    return 0;
}
