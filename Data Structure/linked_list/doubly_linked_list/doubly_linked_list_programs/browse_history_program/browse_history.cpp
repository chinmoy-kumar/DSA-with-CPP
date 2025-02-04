#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string val;
    Node *next;
    Node *pre;
    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->pre = NULL;
    }
};

void insert_at_tail(Node *&head, Node *&tail, string address)
{
    Node *newnode = new Node(address);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->pre = tail;
    tail = newnode;
}

void find_func(Node *head, Node *&present, string &address)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->val == address)
        {
            present = temp;
            cout << present->val << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "Not Available" << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    string address;
    while (1)
    {
        cin >> address;
        if (address == "end")
        {
            break;
        }
        insert_at_tail(head, tail, address);
    }

    int q;
    cin >> q;

    Node *temp = head;

    string toDo;
    while (q--)
    {
        cin >> toDo;

        if (toDo == "visit")
        {
            string tAddress;
            cin >> tAddress;
            find_func(head, temp, tAddress);
        }
        else if(toDo == "next"){
            if(temp != NULL && temp->next != NULL){
                temp = temp->next;
                cout << temp->val << endl;
            }
            else{
                cout << "Not Available" << endl;
            }
        }
        else if(toDo == "prev"){
            if(temp != NULL && temp->pre != NULL){
                temp = temp->pre;
                cout << temp->val << endl;
            }
            else{
                cout << "Not Available" << endl;
            }
        }
        else{
            cout << "Not Available" << endl;
        }
    }

    return 0;
}