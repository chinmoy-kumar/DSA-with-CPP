// Quadratic_complexity
// O(N*N)

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "Hello" << endl;
        } 
    }

    // Nested loop => n * m;
    

    return 0;
}