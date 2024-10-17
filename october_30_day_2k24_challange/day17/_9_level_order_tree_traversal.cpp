// preprocessor
#include <iostream>
#include <queue>
using namespace std;

// Node class definition
class Node {
public:
    int data;
    Node* left = nullptr;
    Node* right = nullptr;
    Node(int data) {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

// Insert at left node
void insertAtLeft(Node*& root, int data) {
    if (root == nullptr) {
        root = new Node(data);
        return;
    }
    Node* temp = root;
    while (temp->left != nullptr) {
        temp = temp->left;
    }
    temp->left = new Node(data); // Correctly assign the new node to the left child
}

// Insert at right node
void insertAtRight(Node*& root, int data) {
    if (root == nullptr) {
        root = new Node(data);
        return;
    }
    Node* temp = root;
    while (temp->right != nullptr) {
        temp = temp->right;
    }
    temp->right = new Node(data); // Correctly assign the new node to the right child
}

// Level order traversal
void levelOrderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* current = q.front();
        q.pop();
        cout << current->data << "->";
        if (current->left != nullptr) {
            q.push(current->left);
        }
        if (current->right != nullptr) {
            q.push(current->right);
        }
    }
}

// Main function
int main() {
    Node* root = new Node(10);
    insertAtLeft(root, 1);
    insertAtRight(root, 2);

    insertAtLeft(root->left, 3);
    insertAtRight(root->left, 4);

    insertAtLeft(root->right, 5);
    insertAtRight(root->right, 6);
    levelOrderTraversal(root);
    return 0;
}