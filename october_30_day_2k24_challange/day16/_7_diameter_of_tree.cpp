//preprocessor
#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;



struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        maxDepth(root, diameter);
        return diameter;
    }

private:
    int maxDepth(TreeNode* node, int& diameter) {
        if (node == NULL) return 0;

        int left = maxDepth(node->left, diameter);
        int right = maxDepth(node->right, diameter);

        diameter = max(diameter, left + right);

        return 1 + max(left, right);
    }
};

int main() {
    // Create a binary tree:
    //       1
    //      / \
    //     2   3
    //    / \
    //   4   5

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    Solution solution;
    int diameter = solution.diameterOfBinaryTree(root);

    std::cout << "Diameter of the binary tree: " << diameter << std::endl;

    return 0;
}