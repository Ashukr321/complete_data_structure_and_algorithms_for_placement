#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

void displayNode(Node *head) {
    Node *temp = head;
    while (temp != nullptr) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void insertNodeAtEnd(Node *&head, int data) {
    Node *newNode = new Node(data);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void deleteNodeAtGivenPos(Node *&head, int pos) {
    if (pos <= 0) {
        cout << "Invalid position" << endl;
        return;
    }

    if (pos == 1) {
        Node *deleteNode = head;
        if (head != nullptr) {
            head = head->next;
            delete deleteNode;
        } else {
            cout << "List is empty, cannot delete." << endl;
        }
        return;
    }

    Node *temp = head;
    for (int i = 1; i < pos - 1; i++) {
        if (temp == nullptr) {
            cout << "Invalid position" << endl;
            return;qz2
        }
        temp = temp->next;
    }

    if (temp == nullptr || temp->next == nullptr) {
        cout << "Invalid position" << endl;
        return;
    }

    Node *deletedNode = temp->next;
    temp->next = deletedNode->next;
    delete deletedNode;
}

// main start here ...
int main() {
    Node *head = nullptr;
    insertNodeAtEnd(head, 1);
    insertNodeAtEnd(head, 2);
    insertNodeAtEnd(head, 3);
    insertNodeAtEnd(head, 4);
    insertNodeAtEnd(head, 5);
    displayNode(head);
    
    int pos;
    cout << "Enter the position at which you want to delete node: ";
    cin >> pos;
    deleteNodeAtGivenPos(head, pos);
    displayNode(head);
    
    return 0;
}