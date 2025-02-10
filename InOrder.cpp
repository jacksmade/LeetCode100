#include <vector>
#include <queue>
#include <stack>
#include <iostream>
using namespace std;

// Definition for a binary tree node.
struct Node {
    int val;
    Node *left;
    Node *right;
    Node(int x) : val(x), left(nullptr), right(nullptr) {}
};
int main()
{
    vector<int>n;
    stack<Node*>s;
    Node* node;
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    s.push(root);
    while(!s.empty())
    {
        if(s.top()->left!=nullptr)
        {
            s.push(root->left);
            root=root->left;
        }
        n.push_back(s.top()->val);
        if(s.top()->right!=nullptr)
        {   
            Node* r=s.top()->right;
            s.pop();
            s.push(r);
        }
        else{
            s.pop();
        }
    }  
    return 0;  
}