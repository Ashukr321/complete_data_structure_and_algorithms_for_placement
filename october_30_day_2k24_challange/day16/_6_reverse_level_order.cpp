#include <iostream>
#include <queue>
#include <stack>

using namespace std;

// Definition for a binary tree node.
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int x) : data(x), left(nullptr), right(nullptr) {}
};

// Function to perform reverse level order traversal
void reverseLevelOrder(Node* root) {
    if (root == nullptr) {
        return;
    }

    // Create a queue for level order traversal
    queue<Node*> q;
    // Create a stack to store the nodes in reverse order
    stack<Node*> s;

    // Start with the root node
    q.push(root);

    // Level order traversal using queue
    while (!q.empty()) {
        Node* current = q.front();
        q.pop();
        // Push the current node onto the stack
        s.push(current);

        // Enqueue right child first so that left child is processed first
        if (current->right) {
            q.push(current->right);
        }
        if (current->left) {
            q.push(current->left);
        }
    }

    // Print nodes in reverse order
    while (!s.empty()) {
        cout << s.top()->data << " ";
        s.pop();
    }
}

// Example usage
int main() {
    // Create a binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << "Reverse Level Order Traversal: ";
    reverseLevelOrder(root);  // Output: 4 5 6 7 2 3 1

    return 0;
}