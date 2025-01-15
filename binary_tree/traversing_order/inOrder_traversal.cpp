#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* left;
        Node* right;

        Node(int val) 
        {
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
};

void inorder(Node* root){     // print the binary tree
    if(root == NULL)
        return;
    inorder(root->left);     // left
    cout << root->val << " "; // root
    inorder(root->right);    // right 
}

int main(){
    Node* root = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);

    root->left = a; // or, (*root).left = a;
    root->right = b;
    a->left = c;
    b->left = d;
    b->right = e; 

    inorder(root);

    return 0;
}

// output: 40 20 10 50 30 60 