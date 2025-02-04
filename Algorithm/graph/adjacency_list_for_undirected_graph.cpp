#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, e;
    cin >> n >> e;
    vector<int> adj_mat[n];  // array of vector
    while(e--){
        int a, b;
        cin >> a >> b;
        adj_mat[a].push_back(b);
        adj_mat[b].push_back(a);  // for undirected graph
    }

    for (int i = 0; i < n; i++)
    {
        cout << i << " -> ";
        for(int x : adj_mat[i])
            cout << x << " ";
        cout << endl;
    }

    return 0;
}

/* Test Case 01
-----------------
input:
5 5
0 1
0 2
3 0
1 3
3 4

output:
0 -> 1 2 3 
1 -> 0 3 
2 -> 0 
3 -> 0 1 4 
4 -> 3 

*/