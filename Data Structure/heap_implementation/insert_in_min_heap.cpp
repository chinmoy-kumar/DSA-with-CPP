// Time Complexity: for one val -> O(logN)

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int val;
    cin >> val;
    v.push_back(val);
    int child_idx = v.size() - 1;

    // insert min heap------------------------------
    while (child_idx != 0)
    {
        int parent_idx = (child_idx - 1) / 2;
        if (v[parent_idx] > v[child_idx])
            swap(v[parent_idx], v[child_idx]);
        else
            break;
        child_idx = parent_idx;
    }
    //-----------------------------------------------

    for(int x : v)
        cout << x << " ";
    cout << endl;

    return 0;
}


/* test case 01
-----------------------
input:  7
output: 5 6 30 10 15 40 45 11 
        5 10 30 11 15 40 45
        6   
*/