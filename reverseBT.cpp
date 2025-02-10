#include <vector>
#include <queue>
#include <stack>
#include<iostream>
using namespace std;

// Definition for a binary tree node.
struct Node {
    int val;
    Node *left;
    Node *right;
    Node(int x) : val(x), left(nullptr), right(nullptr) {}
};

vector<int> reverseLevelOrder(Node *root) {
    vector<int> reverseOrder;
    if (root == nullptr) {
        return reverseOrder;
    }

    queue<Node*> q;
    stack<int> s;
    q.push(root);

    // Level-order traversal with queue, but we push elements into the stack to reverse
    while (!q.empty()) {
        Node* node = q.front();
        q.pop();

        // Push current node's value into the stack
        s.push(node->val);

        // For reverse order, push right child first, then left child
        if (node->right) {
            q.push(node->right);
        }
        if (node->left) {
            q.push(node->left);
        }
    }

    // Pop elements from the stack into the result vector to get reverse level order
    while (!s.empty()) {
        reverseOrder.push_back(s.top());
        s.pop();
    }

    return reverseOrder;
};

int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    
    // Get reverse level order travers
    vector<int> result = reverseLevelOrder(root);

    // Print the result
    cout<< "Reverse Level Order Traversal: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    // Clean up the allocated memory
    delete root->left->left;
    delete root->left->right;
    delete root->right->left;
    delete root->right->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
