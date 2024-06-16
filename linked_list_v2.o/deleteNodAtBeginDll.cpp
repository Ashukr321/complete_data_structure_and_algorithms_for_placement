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
        this->next = nullptr;
        this->prev = nullptr;
    }
};

void display(Node *head)
{
    Node *temp = head;
    while (temp!= nullptr)
    {
        cout << temp->data << " ->";
        temp = temp->next;
    }
    cout << "NULL" << endl; 
}

void insertNodeAtBegin(Node *&head, int data)
{
    Node *newNode = new Node(data);
    if (head == nullptr)
    {
        head = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void deleteNodeAtBeginDll(Node *&head)
{
    if (head == nullptr)
    {
        cout << "Linked list is already empty." << endl;
        return;
    }
    Node *deleteNode = head;
    head = deleteNode->next;
    
    delete deleteNode;
}

int main()
{
    Node *head = nullptr;
    insertNodeAtBegin(head, 1);
    insertNodeAtBegin(head, 2);
    insertNodeAtBegin(head, 3);
    insertNodeAtBegin(head, 4);
    display(head);
    cout << "After deleting the node from the begin: " << endl;
    deleteNodeAtBeginDll(head);
    display(head);
    return 0;
}