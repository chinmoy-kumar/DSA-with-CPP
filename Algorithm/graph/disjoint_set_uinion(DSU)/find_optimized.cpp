/*-------------------------
Time Complexity: O(logN)
-------------------------*/

#include <bits/stdc++.h>
using namespace std;
int par[1005]; // or it can be named as leader[1005];

int find(int node)
{
    if(par[node] == -1)
        return node;
    int leader = find(par[node]);
    par[node] = leader; // update parent array;
    return leader;
}

    int main()
    {
        memset(par, -1, sizeof(par));
        par[0] = 1;
        par[1] = -1;
        par[2] = 1;
        par[3] = 1;
        par[4] = 5;
        par[5] = 3;

        cout << find(4) << endl;

        return 0;
    }

// output: 1