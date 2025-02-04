#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    // Normal vector format: vector<int> v(n);
    vector<pair<int, int>> v(n);

    // user input
    for(int i = 0; i < n; i++){
        cin >> v[i].first >> v[i].second;
    }

    // print output
    for(int i = 0; i < n; i++){
        cout << v[i].first << " " << v[i].second << endl;
    }


    return 0;
}