#include<iostream>
using namespace std;

// making the structure
struct node {
    int data;
    node *next;
    node *prev;
    node(int d) {
        this->data = d;
        this->next = prev = nullptr;
    }
};

// Traversal forward direction
void traversing_forward(node *head) {
    node *temp = head;
    while (temp != nullptr) {
        cout << temp->data << "  ";
        temp = temp->next;
    }
    cout << endl;
}

// Traversal backward direction
void traversing_backward(node *tail) {
    node *temp = tail;
    while (temp != nullptr) {
        cout << temp->data << "  ";
        temp = temp->prev;
    }
    cout << endl;
}

// Finding the length of the doubly linked list
int length(node *head) {
    int count = 0;
    node *temp = head;
    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }
    return count;
}

// Insertion at the beginning
node* insertion_AT_beginning(node *head, int d) {
    node *node1 = new node(d);
    node1->next = head;
    if (head != nullptr) {
        head->prev = node1;
    }
    return node1;
}

// Insertion at the end
node* insertion_AT_end(node *head, int d) {
    node *node1 = new node(d);
    if (head == nullptr) {
        return node1;
    }
    node *temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = node1;
    node1->prev = temp;
    return head;
}

// Insertion at any position
node* insertion_At_position(node *head, int pos, int d) {
    if (pos < 1) {
        cout << "Invalid Position" << endl;
        return head;
    }

    node *temp = new node(d);
    if (pos == 1) {
        temp->next = head;
        if (head != nullptr) {
            head->prev = temp;
        }
        return temp;
    }

    node *p = head;
    int i = 1;
    while (p != nullptr && i < pos - 1) {
        p = p->next;
        i++;
    }

    if (p == nullptr) {
        cout << "Position out of bound" << endl;
        delete temp;
        return head;
    }

    temp->next = p->next;
    temp->prev = p;
    if (p->next != nullptr) {
        p->next->prev = temp;
    }
    p->next = temp;

    return head;
}

// Deletion at the beginning
node* deleting_from_beginning(node *head) {
    if (head == nullptr) return nullptr;
    node *temp = head;
    head = head->next;
    if (head != nullptr) {
        head->prev = nullptr;
    }
    delete temp;
    return head;
}

// Deletion at the end
node* deleting_from_end(node *head) {
    if (head == nullptr) return nullptr;
    node *temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    if (temp->prev != nullptr) {
        temp->prev->next = nullptr;
    } else {
        head = nullptr;
    }
    delete temp;
    return head;
}

// Deletion at any position
node* deleting_from_position(node *head, int pos) {
    if (pos < 1 || head == nullptr) {
        cout << "Invalid Position" << endl;
        return head;
    }

    if (pos == 1) {
        node *temp = head;
        head = head->next;
        if (head != nullptr) {
            head->prev = nullptr;
        }
        delete temp;
        return head;
    }

    node *p = head;
    int i = 1;
    while (p != nullptr && i < pos) {
        p = p->next;
        i++;
    }

    if (p == nullptr) {
        cout << "Position out of bound" << endl;
        return head;
    }

    if (p->prev != nullptr) {
        p->prev->next = p->next;
    }
    if (p->next != nullptr) {
        p->next->prev = p->prev;
    }

    delete p;
    return head;
}

int main() {
    node *first = new node(10);
    node *second = new node(20);
    node *third = new node(30);

    first->prev = nullptr;
    first->next = second;
    second->prev = first;
    second->next = third;
    third->prev = second;
    third->next = nullptr;

    // Insertion at the beginning
    node *node1 = insertion_AT_beginning(first, 40);
    traversing_forward(node1);

    // Insertion at the end
    node *node2 = insertion_AT_end(node1, 50);
    traversing_forward(node2);

    // Finding the length
    int l = length(first);
    cout << "Length of the doubly linked list = " << l << endl;

    // Traversing forward and backward
    traversing_forward(first);
    traversing_backward(third);

    // Insertion at a specific position
    node *node3 = insertion_At_position(node2, 3, 60);
    traversing_forward(node3);

    // Deletion at the beginning
    node *node4 = deleting_from_beginning(node3);
    traversing_forward(node4);

    // Deletion at the end
    node *node5 = deleting_from_end(node4);
    traversing_forward(node5);

    // Deletion at a specific position
    node *node6 = deleting_from_position(node5, 2);
    traversing_forward(node6);

    return 0;
}
