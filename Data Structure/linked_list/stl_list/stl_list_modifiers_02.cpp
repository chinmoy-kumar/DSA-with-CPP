#include <bits/stdc++.h>
using namespace std;
int main(){
    list<int> l1 = {10, 20, 30, 40, 50};

    l1.erase(next(l1.begin(), 3)); // single erase
    for(int val : l1){
        cout << val << " ";
    }
    cout << endl;

    list<int> l2 = {10, 20, 30, 40, 50, 60};
    l2.erase(next(l2.begin(), 2), next(l2.begin(), 5)); // multiple erase

    for(int val : l2){
        cout << val << " ";
    }
    cout << endl;
    //------------------------------

    list<int> l3 = {10, 20, 30, 20, 20, 40, 50};

    replace(l3.begin(), l3.end(), 20, 7);
    for(int val : l3){
        cout << val << " ";
    }
    cout << endl;
    //------------------------------

    list<int> l4 = {10, 20, 30, 40, 50};
    auto it = find(l4.begin(), l4.end(), 30);
    if(it == l4.end()){
        cout << "Not Found" << endl;
    }
    else{
        cout << "Found" << endl;
    }

    return 0;
}