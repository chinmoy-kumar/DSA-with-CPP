// O(sqrt(N))

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    for (int i = 1; i <= sqrt(n); i++)
    // for(int i = 1; i*i <= n; i++)
    {
        cout << i << endl;
    }
    

    return 0;
}