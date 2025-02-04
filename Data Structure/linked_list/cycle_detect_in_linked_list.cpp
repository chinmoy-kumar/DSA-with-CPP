// Time complexity: O(N);

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
        next = NULL;
    }
};

void detect_cycle(Node *slow, Node *fast)
{
    bool flag = false;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            // cycle detected
            flag = true;
            break;
        }
    }
    if(flag == true)
        cout << "Cycle Detected";
    else
        cout << "Cycle Not Detected";
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = a;

    detect_cycle(head, head);

    return 0;
}