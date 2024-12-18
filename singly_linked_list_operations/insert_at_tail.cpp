#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

// insert at tail function
void insert_at_tail(Node *&head, int val)
{
    Node *newNode = new Node(val); 
    if (head == NULL) // for handle head = NULL case
    { 
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    // after this while loop temp is at last node
    temp->next = newNode;
}

// function to print the linked list
void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);

    head->next = a;
    a->next = b;

    insert_at_tail(head, 40);
    insert_at_tail(head, 50);
    insert_at_tail(head, 60);

    print_linked_list(head);

    return 0;
}