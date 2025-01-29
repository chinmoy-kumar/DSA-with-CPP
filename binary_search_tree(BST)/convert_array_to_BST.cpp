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

void level_order(Node* root){
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* f = q.front();
        q.pop();

        cout << f->val << " ";

        if(f->left)
            q.push(f->left);
        if(f->right)
            q.push(f->right);
    }
}

Node* convert(int a[], int n, int l, int r){
    if(l>r) // base case
        return NULL;
    
    int mid = (l+r)/2;
    Node* root = new Node(a[mid]);
    Node* leftRoot = convert(a, n, l, mid-1);
    Node* rightRoot = convert(a, n, mid+1, r);

    // connection
    root->left = leftRoot;
    root->right = rightRoot;

    return root;
}


int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    Node* root = convert(arr, n, 0, n-1);

    level_order(root);

    return 0;
}

/* test case 01
-----------------------
input:  
6 
2 5 8 11 15 18

output: 8 2 15 5 11 18 
*/