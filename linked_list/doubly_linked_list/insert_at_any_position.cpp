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

void insert_at_any_position(Node* head, int idx, int val){
    Node* newNode = new Node(val);
    Node* temp = head;
    for (int i = 0; i < idx-1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next->pre = newNode;
    temp->next = newNode;
    newNode->pre = temp;
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
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;
    a->pre = head;

    a->next = tail;
    tail->pre = a;

    insert_at_any_position(head,2,100);
    insert_at_any_position(head,1,500);

    print_forward(head);

    return 0;
}