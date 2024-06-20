#include <iostream>
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
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "null" << endl;
}

void insertNodeAtBegin(Node*& head, int data) {
    Node* newNode = new Node(data);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

Node* reverseList(Node* head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;
    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}

bool isPalindrome(Node* head) {
    if (!head || !head->next) return true;
    
    Node* slow = head;
    Node* fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    Node* secondHalf = reverseList(slow);
    Node* firstHalf = head;

    Node* tempSecond = secondHalf;
    bool ispalindrom = true;
    while (ispalindrom && tempSecond != nullptr) {
        if (firstHalf->data != tempSecond->data) {
            ispalindrom = false;
        }
        firstHalf = firstHalf->next;
        tempSecond = tempSecond->next;
    }

    reverseList(secondHalf); // Restore the original list
    return ispalindrom;
}

int main() {
    Node* head = nullptr;
    insertNodeAtBegin(head, 1);
    insertNodeAtBegin(head, 2);
    insertNodeAtBegin(head, 3);
    insertNodeAtBegin(head, 2);
    insertNodeAtBegin(head, 1);
    
    displayNode(head);
    cout << "Check if the linked list is a palindrome: " << endl;
    
    if (isPalindrome(head)) {
        cout << "Yes, it is a palindrome." << endl;
    } else {
        cout << "No, the linked list is not a palindrome." << endl;
    }
    
    return 0;
}
