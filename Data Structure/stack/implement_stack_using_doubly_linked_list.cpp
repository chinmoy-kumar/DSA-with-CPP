#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;
        Node* prev;

        Node(int val) 
        {
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
};

class myStack{
    public:
        Node* head = NULL;
        Node* tail = NULL;
        int sz = 0;

        // NOTE: we don't need to use &head or &tail because head, tail and funciton are already declared in the same class which is "myStack" class.
        void push(int val){ 
            sz++;

            Node* newNode = new Node(val);
            if(head == NULL){
                head = newNode;
                tail = newNode;
                return;
            }
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }

        void pop(){
            sz--;

            Node* deleteNode = tail;
            tail = tail->prev;
            delete deleteNode;
            if(tail == NULL){
                head = NULL;
                return;
            }
            tail->next = NULL;
        }

        int top(){
            return tail->val;
        }
        
        int size(){
            return sz;
        }

        bool empty(){
            /* if(head == NULL)
                return true;
            else    
                return false; */
            // or, shortcut:
            return head == NULL;
        }
};

int main(){
    myStack st; 

    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        st.push(x);
    }

    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}