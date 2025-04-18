#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    multiset<int> ml;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ml.insert(x);
    }

    /*
    // access set elements
    auto it = ml.begin();
    it++; // to go to the next
    it++;
    it--; // to go to the previous
    cout << *it << '\n';
    */

    // print all value of set
    for (auto value : ml)
    {
        cout << value << " ";
    }
    cout << '\n';

    /*
    // Find -> find returns a iterator of that value
    auto it = ml.find(6);
    if (it != ml.end())
        cout << "found" << '\n';
    else
        cout << "not found" << '\n';
    */

    // Erase -> Always check if that value is present or not in that set before using erase function

    // 1) to erase all the same repetative values.
    // ml.erase(2);   // O(logn)

    // ml.erase(9);  // O(logn + k ) -> cause 9 has multiple times and k is the number of times it is present

    /*
    // 2) to erase only one value
    auto it = ml.find(9);
    ml.erase(it);
    // O(logn + logn) or O(2logn) or O(logn) -> count complexity of both find and erase function.

    for (int value : ml)
        cout << value << " ";
    cout << '\n';
    */

    // Count
    // cout << ml.count(9) << endl;
    // O(logn) -> if the value is present in the multiset single time.
    // O(logn + k) -> to count the number of times a value is present in the multiset and k is the number of times it is present.

    /*
    // Lower Bound -> get an iterator to the first element which is greater or equal to x.
    int N;
    cin >> N;
    auto it = ml.lower_bound(N);
    cout << *it << '\n';

    if(it == ml.end())
        cout << "End" << '\n';
    else
        cout << *it << '\n';
    */

    // Upper Bound -> get an iterator to the first element which is strictly greater than x
    int m;
    cin >> m;
    auto it = ml.upper_bound(m);
    // ml.erase(it);

    // if (it == ml.end())
    //     cout << "End" << '\n';
    // else
    //     cout << *it << '\n';

    for (int value : ml)
        cout << value << " ";
    cout << '\n';

    return 0;
}