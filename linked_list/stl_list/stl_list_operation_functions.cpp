#include <bits/stdc++.h>
using namespace std;
int main(){
    list<int> l1 = {1, 20, 3, 20, 5};
    l1.remove(20);
    for(int val : l1){
        cout << val << " ";
    }
    cout << endl;
    //--------------------------------

    list<int> l2 = {2, 5, 1, 4, 3};
    l2.sort(); // ascending order
    // l2.sort(greater<int>()); // descending order
    for(int val : l2){
        cout << val << " ";
    }
    cout << endl;
    //--------------------------------
    
    list<int> l3 = {3, 5, 1, 4, 3, 4, 5};
    l3.sort();
    l3.unique(); // it removes the duplicate values and keeps only the unique vales
    // NOTE: unique() only works properly when the list is sorted.
    for(int val : l3){
        cout << val << " ";
    }
    cout << endl;
    //--------------------------------

    list<int> l4 = {1, 2, 3, 4, 5};
    l4.reverse();
    for(int val : l4){
        cout << val << " ";
    }
    cout << endl;

    return 0;
}