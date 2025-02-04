#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;
        Node* pre;

        Node(int val) 
        {
            this->val = val;
            this->next = NULL;
            this->pre = NULL;
        }
};

void delete_at_any_pos(Node* head, int idx){
    Node* temp = head;
    for (int i = 0; i < idx-1; i++)
    {
        temp = temp->next;
    }
    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    temp->next->pre = temp;
    delete deleteNode; 
}

void print_forward(Node* head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);
    
    head->next = a;
    a->pre = head;

    a->next = tail;
    tail->pre = a;

    delete_at_any_pos(head, 1);
    print_forward(head);

    return 0;
}