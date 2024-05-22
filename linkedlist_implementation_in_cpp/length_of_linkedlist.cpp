#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

   
};

void displayNode(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void insertNodeBegin(Node *&head, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

int lengthOfNode(Node *head)
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

// main start here ...
int main()
{
    Node *head = NULL;
    insertNodeBegin(head, 1);
    insertNodeBegin(head, 10);
    insertNodeBegin(head, 20);
    insertNodeBegin(head, 5);
    displayNode(head);

    cout << "Length of the linked list: " << lengthOfNode(head) << endl;
    
    // Clean up the linked list to avoid memory leaks
    while (head != NULL)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    
    return 0;
}
