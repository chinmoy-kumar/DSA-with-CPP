#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {1, 2, 3, 4, 5};

    l.clear();

    cout << l.size() << endl;

    if (l.empty())
    {
        cout << "Empty" << endl;
    }

    for (int val : l)
    {
        cout << val << " ";
    }
    cout << endl;

    // size decrease by using resize()
    list<int> l2 = {1, 2, 3, 4, 5};
    l2.resize(2);
    for(int val : l2)
        cout << val << " ";
    cout << endl;

    // size increase by using resize()
    list<int> l3 = {10, 20, 30};
    l3.resize(5, 100);
    for(int val : l3)
        cout << val << " ";
    cout << endl;

    return 0;
}