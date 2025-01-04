#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};


void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

void palindrome_checker(Node* head, Node* tail){
    bool flag = false;
    for(Node *i = head, *j = tail; i != j && i->prev != j; i = i->next, j = j->prev){
        if(i->val != j->val){
            cout << "Not Panildrome";
            flag = true;
            break;
        }
    }
    if(flag == false){
        cout << "Panildrome";
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {        
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    palindrome_checker(head, tail);

    return 0;
}