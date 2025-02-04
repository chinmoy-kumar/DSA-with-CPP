#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    // For without space string
    //---------------------------
    /*
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (string s : v)
    {
        cout << s << endl;
    }
    */

    // For with space string
    //---------------------------
    int n;
    cin >> n;
    cin.ignore();
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        getline(cin, v[i]);
    }
    for (string s : v)
    {
        cout << s << endl;
    }

    return 0;
}