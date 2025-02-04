#include <bits/stdc++.h>
using namespace std;

class myStack{
    public:
        vector<int> v; // stack implementation using vector

        // Stack Operations
        // all these 5 operation's time complexcity is O(1)
        void push(int val){
            v.push_back(val);
        }

        void pop(){
            v.pop_back();
        }

        int top(){
            return v.back();
        }
        
        int size(){
            return v.size();
        }

        bool empty(){
            return v.empty();
        }
};

int main(){
    myStack st; // "st" is an object of myStack class
    
    st.push(10);
    st.push(20);
    st.push(30);
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    
    if(!st.empty()) // or, if(st.empty() == false)
        cout << st.top() << endl;
    if(!st.empty())
        st.pop();
    return 0;
}