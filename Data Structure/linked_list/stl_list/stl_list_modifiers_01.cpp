#include <bits/stdc++.h>
using namespace std;
int main(){
    list<int> l = {10, 20, 30};
    list<int> l2;
    l2 = l;
    // or
    // l2.assign(l.begin(), l.end());

    for(int val : l){
        cout << val << " ";
    }
    cout << endl;
    //---------------------------------
    list<int> l3 = {10, 20, 30};

    l3.push_back(40);
    l3.push_front(100);

    for(int val : l3){
        cout << val << " ";
    }
    cout << endl;
    //---------------------------------

    l3.pop_back();
    l3.pop_front();

    for(int val : l3){
        cout << val << " ";
    }
    cout << endl;
    //---------------------------------

    list<int> l4 = {100, 200, 300};
    list<int> l5 = {1, 2, 3};
    vector<int> v = {4, 5, 6};
    // single insertion
    l4.insert(next(l4.begin(), 2), 5);
    
    for(int val : l4){
        cout << val << " ";
    }
    cout << endl;
    // list insertion
    l4.insert(next(l4.begin(), 2), l5.begin(), l5.end());
    
    for(int val : l4){
        cout << val << " ";
    }
    cout << endl;
    // vector insertion
    l4.insert(next(l4.begin(), 2), v.begin(), v.end());

    for(int val : l4){
        cout << val << " ";
    }
    cout << endl;
    //---------------------------------

    return 0;
}