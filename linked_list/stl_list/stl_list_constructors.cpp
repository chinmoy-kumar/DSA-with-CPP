#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;
    cout << l.size() << endl;

    list<int> l2(10);
    cout << l2.size() << endl;

    list<int> l3(10, 3);
    /* for(auto it = l3.begin(); it != l3.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    */
    // or Range based
    for (int val : l3)
    {
        cout << val << " ";
    }
    cout << endl;

    // copy using list
    cout << "Copy using list: ";
    list<int> l4 = {1, 2, 3, 4, 5};
    list<int> l5(l4);
    for (int val : l5)
    {
        cout << val << " ";
    }
    cout << endl;

    // copy using array
    cout << "Copy using array: ";
    int arr[] = {10, 20, 30};
    list<int> l6(arr, arr + 3);
    for (int val : l6)
    {
        cout << val << " ";
    }
    cout << endl;

    // copy using vector
    cout << "Copy using vector: ";
    vector<int> v = {100, 110, 120};
    list<int> l7(v.begin(), v.end());
    for (int val : l7)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}