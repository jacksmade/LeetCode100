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
    queue<pair<Node*,int>>q;
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
   
    q.push({root,0});
    bool check=1;
    int leaflevel=-1;
    while(!q.empty())
    {
        Node* n=q.front().first;
        int level=q.front().second;
        q.pop();
        
        if(!n->left && !n->right)
        {
           if(leaflevel==-1)
           {
                leaflevel=level;
           }
           else if(leaflevel!=level)
           {
            check=0;
           }
        }
        if(n->left!=nullptr)
        {
            q.push({n->left,level+1});
        }
        if(n->right!=nullptr)
        {
            q.push({n->right,level+1});
        }

    }
    cout<<"the hight is "<< leaflevel<<"the leaf is " <<check;

    return 0;  
}