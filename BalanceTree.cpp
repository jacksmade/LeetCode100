#include <iostream>
#include <algorithm>
using namespace std;

// Definition for a binary tree node.
struct Node {
    int val;
    Node *left;
    Node *right;
    Node(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Helper function to check if the tree is balanced and return the height
int checkBalance(Node* root) {
    if (root == nullptr)
        return 0;

    // Recursively get the height of left and right subtrees
    int leftHeight = checkBalance(root->left);
    if (leftHeight == -1) return -1;  // Left subtree is not balanced

    int rightHeight = checkBalance(root->right);
    if (rightHeight == -1) return -1;  // Right subtree is not balanced

    // Check if current node is balanced
    if (abs(leftHeight - rightHeight) > 1)
        return -1;  // Not balanced

    // Return the height if balanced
    return max(leftHeight, rightHeight) + 1;
}

int main() {
    // Constructing the binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->left->right = new Node(3);

    // Check if the tree is balanced
    if (checkBalance(root) != -1) {
        cout << "The tree is balanced." << endl;
    } else {
        cout << "The tree is not balanced." << endl;
    }

    return 0;
}
