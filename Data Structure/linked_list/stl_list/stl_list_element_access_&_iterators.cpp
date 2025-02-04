#include <bits/stdc++.h>
using namespace std;
int main(){
    list<int> l1 = {1, 2, 3, 4, 5};
    cout << l1.back()  << endl;
    cout << l1.front() << endl; // or, cout << *l1.begin() << endl;

    cout << *next(l1.begin(), 2) << endl;

    return 0;
}