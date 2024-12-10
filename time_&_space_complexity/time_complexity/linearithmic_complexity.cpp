// Linearithmic_complexity
// O(N*log(N))

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j *= 2)
        {
            cout << "Hello" << endl;
        } 
    }

    return 0;
}