#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    /* Fixed size 2D vector
    -----------------------------
    int n, m;
    cin >> n >> m;

    vector<vector<int>> v(n, vector<int>(m, 3));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }
    */

    // Dynamic 2D Vector
    //-----------------------
    int n;
    cin >> n;
    vector<vector<int>> v;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        vector<int> a;
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }

        // for (auto value : a)
        // {
        //     cout << value << " ";
        // }
        // cout << '\n';

        v.push_back(a);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }
    

    return 0;
}


/* Test Case - 01
-------------------
input:
3
2
1 5
5 
5 2 1 9 2
4
2 3 1 6

output:
1 5 
5 2 1 9 2 
2 3 1 6 

*/
