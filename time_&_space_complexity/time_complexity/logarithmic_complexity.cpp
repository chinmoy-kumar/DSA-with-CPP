// Logarithmic_complexity
// O(log(N))

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    for (int i = 1; i <= n; i *= 2)
    {
        cout << i << endl;
    }

    cout << "or" << endl;

    for (int i = n; i != 0; i /= 2)
    {
        cout << i << endl;
    }

    return 0;
}