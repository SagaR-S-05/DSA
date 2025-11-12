// With constructor
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

Node* createNode(int value) {
    return new Node(value);
}

void insertAtPosition(Node*& head, int position, int value) {
    Node* newNode = createNode(value);

    if (position == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;
    int count = 1;

    while (temp != nullptr && count < position - 1) {
        temp = temp->next;
        count++;
    }

    if (temp != nullptr) {
        newNode->next = temp->next;
        temp->next = newNode;
    } else {
        cout << "Position out of range!" << endl;
        delete newNode;
    }
}

void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "nullptr" << endl;
}

int main() {
    Node* head = nullptr;

    insertAtPosition(head, 1, 10);
    insertAtPosition(head, 2, 20);
    insertAtPosition(head, 3, 30);
    insertAtPosition(head, 2, 15);

    printList(head);

    return 0;
}


