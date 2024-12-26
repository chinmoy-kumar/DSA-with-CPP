// Doubly linked list
// insert_at_tail

#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *pre;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->pre = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);
    if(head == NULL){ // corner case
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->pre = tail;
    tail = newNode;
}

void print_forward(Node *head)
{
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    /* For NULL test case
        Node* head = NULL;
        Node* tail = NULL;
    */
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    head->next = a;
    a->pre = head;
 
    a->next = tail;
    tail->pre = a;

    insert_at_tail(head, tail, 100);
    insert_at_tail(head, tail, 200);

    print_forward(head);

    return 0;
}