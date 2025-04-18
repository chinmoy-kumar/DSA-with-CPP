#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    
    /*
    // access set elements
    auto it = s.begin();
    it++; // to go to the next
    it++;
    it--; // to go to the previous
    cout << *it << '\n';
    */

    
    // print all value of set
    for(auto value : s)
    {
        cout << value << " ";
    }
    cout << '\n';
    

    /*
    // Find -> find returns a iterator of that value
    auto it = s.find(6);
    if(it != s.end())
        cout << "found" << '\n';
    else
        cout << "not found" << '\n';
    */

    /*
    // Erase -> Always check if that value is present or not in that set before using erase function
    s.erase(2);
    for(int value : s)
        cout << value << " ";
    cout << '\n';
    */

    // Count
    // cout << s.count(9) << endl;

    /*
    // Lower Bound -> get an iterator to the first element which is greater or equal to x.
    int N;
    cin >> N;
    auto it = s.lower_bound(N);
    cout << *it << '\n';

    if(it == s.end())
        cout << "End" << '\n';
    else
        cout << *it << '\n';
    */

    // Upper Bound -> get an iterator to the first element which is strictly greater than x
    int m;
    cin >> m;
    auto it = s.upper_bound(m);
    // cout << *it << '\n';

    if(it == s.end())
    {

        cout << "End" << '\n';
    }
    else{

        cout << *it << '\n';
    }

    return 0;
}