// Problem: Take two doubly linked lists as input and check if they are the same or not.

// solution:
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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->pre = tail;
    tail = newNode;
}

void linked_list_cmp(Node *head, Node *head2)
{
    Node *tmp = head;
    Node *tmp2 = head2;

    while (tmp != NULL && tmp2 != NULL)
    {
        if (tmp->val != tmp2->val)
        {
            cout << "NO";
            return;
        }
        tmp = tmp->next;
        tmp2 = tmp2->next;
    }
    if (tmp == NULL && tmp2 == NULL)
    {
        cout << "YES";
    }
    else
        cout << "NO";
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (1)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_at_tail(head, tail, val);
    }

    Node *head2 = NULL;
    Node *tail2 = NULL;
    int val2;
    while (1)
    {
        cin >> val2;
        if (val2 == -1)
        {
            break;
        }
        insert_at_tail(head2, tail2, val2);
    }

    linked_list_cmp(head, head2);

    return 0;
}