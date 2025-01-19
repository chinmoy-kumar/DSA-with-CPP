#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1) // if the binary tree is empty(means start with -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    if (root) // or, if(root != NULL)
        q.push(root);

    while (!q.empty())
    {
        // step-01: select a node
        Node *p = q.front();
        q.pop();

        // step-02: work with that selected node
        int l, r;
        cin >> l >> r;
        Node *myLeft, *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);

        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        // create connections between parent and children
        p->left = myLeft;
        p->right = myRight;

        // step-03: push children in queue
        if (p->left) // or, if(f->left != NULL)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

void level_order(Node *root)
{
    if (root == NULL)
    {
        cout << "No Tree";
        return;
    }

    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // step-01: select a node
        Node *f = q.front();
        q.pop();

        // step-02: work with that selected node
        cout << f->val << " ";

        // step-03: push children in queue
        if (f->left) // or, if(f->left != NULL)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}

int main()
{
    Node *root = input_tree();
    level_order(root);

    return 0;
}

/* test case-01
input: 10 20 30 40 -1 50 60 -1 -1 -1 -1 -1 -1  (-1 means there is no childrean)
output: 10 20 30 40 50 60

test case-02
input: -1
output: No Tree
*/