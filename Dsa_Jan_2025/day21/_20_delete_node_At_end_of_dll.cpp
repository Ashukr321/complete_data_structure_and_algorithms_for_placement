#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int data)
    {
        this->data = data;
        this->next = nullptr; // Use nullptr instead of NULL
        this->prev = nullptr; // Use nullptr instead of NULL
    }
};

void displayNode(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "null" << endl;
}

void insertNodeAtEnd(Node *&head, int data)
{
    Node *newNode = new Node(data);
    if (head == nullptr) // Use nullptr instead of NULL
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;    // Set the next of the last node to newNode
    newNode->prev = temp;    // Set the prev of newNode to the last node
    newNode->next = nullptr; // Set the next of newNode to nullptr
}

void deleteNodeAtEnd(Node *&head)
{
    if (head == nullptr) // If the list is empty
        return;

    if (head->next == nullptr) // If there's only one node
    {
        delete head; // Delete the only node
        head = nullptr; // Set head to nullptr
        return;
    }

    Node *temp = head;
    while (temp->next->next != nullptr) // Traverse to the second last node
    {
        temp = temp->next;
    }

    delete temp->next; // Delete the last node
    temp->next = nullptr; // Set the next of the second last node to nullptr
}

int main()
{
    Node *head = nullptr; // Use nullptr instead of NULLl
    insertNodeAtEnd(head, 10);
    insertNodeAtEnd(head, 20);
    insertNodeAtEnd(head, 30);
    insertNodeAtEnd(head, 40);
    displayNode(head);
    deleteNodeAtEnd(head);
    displayNode(head);

    return 0;
}