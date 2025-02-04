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

Node* input_tree(){
    int val;
    cin >> val;
    Node* root;
    if(val == -1)
        root = NULL;
    else
        root = new Node(val);
    
    queue<Node*> q;
    if(root)
        q.push(root);
    
    while(!q.empty()){
        Node* parent = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myLeft, *myRight;
        if(l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        
        if(r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        parent->left = myLeft;
        parent->right = myRight;

        if(parent->left)
            q.push(parent->left);
        if(parent->right)
            q.push(parent->right);
    }

    return root;
}

bool search(Node* root, int val)
{
    if(root == NULL)
        return false;
    if(root->val == val)
        return true;
    if(root->val > val)
        return search(root->left, val);
        /* or, 
            bool l = search(root->left, val);
            return l;
        */
    else
        return search(root->right, val);
        /* or, 
            bool r = search(root->right, val);
            return r;
        */
}

int main(){
    Node* root = input_tree();
    int val;
    cin >> val;
    if (search(root,val))
        cout << "Found" ;
    else
        cout << "Not found" ;

    return 0;
}

/* test case 01
input:  18 7 21 -1 12 20 26 9 15 -1 -1 -1 -1 -1 -1 -1 -1
        21
output: Found

test case 02
input:  18 7 21 -1 12 20 26 9 15 -1 -1 -1 -1 -1 -1 -1 -1
        16
output: Not found

*/