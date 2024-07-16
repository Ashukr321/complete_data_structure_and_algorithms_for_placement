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
    static void displayNode(Node *head);
    static void insertNodeAtBegin(Node *&head, int data);
};

void Node::insertNodeAtBegin(Node *&head, int data)
{
    Node *newNode = new Node(data);
    if (head == nullptr)
    {
        head = newNode;
        // create the cycle of the node 
        newNode->next = newNode;
        newNode->prev = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    
    newNode->next = head;
    newNode->prev = temp;
    temp->next = newNode;
    head->prev = newNode;
    head = newNode;
}

void Node::displayNode(Node *head)
{
    Node *temp = head;
    if (head == nullptr)
    {
        cout << "linked list is null:" << endl;
        return;
    }
    do
    {
        cout << temp->data << " ->";
        temp = temp->next;
    } while (temp != head);
    cout << "HEAD" << endl;
}

int main()
{
    Node *head = nullptr;
    int size;
    cout << "Enter the size of the linked list:" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int n;
        cout << "Enter the element at index: " << i << endl;
        cin >> n;
        Node::insertNodeAtBegin(head, n);
    }
    cout << "display all the node : " << endl;
    Node::displayNode(head);

    return 0;
}