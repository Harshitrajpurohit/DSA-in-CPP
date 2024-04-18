
#include <iostream>

using namespace std;

struct Node {
    int data;
    int priority;
    Node* next;
};

Node* head = nullptr;

void push(Node*& head, int data, int priority) {
    Node* newnode = new Node;
    newnode->data = data;
    newnode->priority = priority;
    newnode->next = nullptr;

    if (head == nullptr || head->priority < priority) {
        newnode->next = head;
        head = newnode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr && temp->next->priority >= priority) {
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
}

int main() {
    push(head, 2, 2); // head,data,priority
    push(head, 1, 5);
    push(head, 9, 0);
    push(head, 6, 0);

    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }

    // Free memory
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}

