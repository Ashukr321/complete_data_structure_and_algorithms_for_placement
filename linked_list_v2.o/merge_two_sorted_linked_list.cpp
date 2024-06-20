#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

void displayNode(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data;
        if (temp->next != nullptr)
            cout << " -> ";
        temp = temp->next;
    }
    cout << " -> null" << endl;
}

void insertAtEnd(Node *&head, int data)
{
    Node *newNode = new Node(data);
    if (head == nullptr)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

Node *mergeLinkedList(Node *l1, Node *l2)
{
    Node *dummy = new Node(0);
    Node *current = dummy;
    while (l1 != nullptr && l2 != nullptr)
    {
        if (l1->data < l2->data)
        {
            current->next = l1;
            l1 = l1->next;
        }
        else
        {
            current->next = l2;
            l2 = l2->next;
        }
        current = current->next;
    }

    if (l1 != nullptr)
    {
        current->next = l1;
    }
    else
    {
        current->next = l2;
    }
    return dummy->next; // Corrected to return the merged list
}

// main start here ...
int main()
{
    Node *l1 = nullptr;
    Node *l2 = nullptr;

    insertAtEnd(l1, 1);
    insertAtEnd(l1, 2);
    insertAtEnd(l1, 3);
    insertAtEnd(l1, 4);

    cout << "l1 linked list: " << endl;
    displayNode(l1);

    insertAtEnd(l2, 6);
    insertAtEnd(l2, 7);
    insertAtEnd(l2, 8);
    insertAtEnd(l2, 9);
    insertAtEnd(l2, 10);

    cout << "l2 linked list: " << endl;
    displayNode(l2);

    Node *mergedLinkedList = mergeLinkedList(l1, l2);
    cout << "merged linked list: " << endl;
    displayNode(mergedLinkedList);

    return 0;
}
