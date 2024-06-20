#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

void displayNode(Node* head) {
    Node* temp = head;
    while (temp!= nullptr) {
        cout << temp->data << " ->";
        temp = temp->next;
    }
    cout << "null" << endl;
}

Node* insertAtEnd(Node*& head, int data) {
    Node* newNode = new Node(data);
    if (head == nullptr) {
        head = newNode;
        return head;
    }
    Node* temp = head;
    while (temp->next!= nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

Node* reverseLinkedList(Node* head) {
    if (!head ||!head->next) {
        return head;
    }
    Node* newHead = reverseLinkedList(head->next);
    head->next->next = head;
    head->next = NULL;

    return newHead;
}

int main() {
    Node* head = nullptr;
    head = insertAtEnd(head, 1);
    head = insertAtEnd(head, 2);
    head = insertAtEnd(head, 4);
    head = insertAtEnd(head, 5);
    cout << "Before reversing the linked list: " << endl;
    displayNode(head);
    cout << endl;
    cout << "After reversing the linked list: " << endl;
    head = reverseLinkedList(head); // Update head to point to the new head
    displayNode(head);
    return 0;
}