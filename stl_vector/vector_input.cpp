#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    // vector with size declaration
    vector<int> v(n); // with size declaration
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // vector without size declaration
    int m;
    cin >> m;
    vector<int> v1; // without size declaration
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;
    

    return 0;
}