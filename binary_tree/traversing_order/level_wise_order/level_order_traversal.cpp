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

void level_order(Node* root){
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        // step-01: select a node
        Node* f = q.front();
        q.pop();

        // step-02: work with that selected node
        cout << f->val << " ";

        // step-03: push children in queue
        if(f->left) // or, if(f->left != NULL)
            q.push(f->left);
        if(f->right)
            q.push(f->right);
    }
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

    level_order(root);
    return 0;
}

// output: 10 20 30 40 50 60 
// -1 means there is no childrean