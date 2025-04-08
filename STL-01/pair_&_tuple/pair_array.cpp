#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    pair<string, int> students[n];
    for (int i = 0; i < n; i++)
    {
        cin >> students[i].first >> students[i].second;
    }
    
    // Range based for loop (Only works in c++ 17 or above versions)
    
    for (auto [x, y] : students)
    {
        cout << x << " " << y << "\n";
    }
    // or
    /*
    for (int i = 0; i < n; i++)
    {
        cout << students[i].first << " " << students[i].second << "\n";
    }
    */
    

    return 0;
}

/* Test Case - 01
-------------------
input:
3
rahim 10
karim 20
bablu 12

output:
rahim 10
karim 20
bablu 12

*/