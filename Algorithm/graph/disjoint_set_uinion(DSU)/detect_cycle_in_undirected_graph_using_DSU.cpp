#include <bits/stdc++.h>
using namespace std;
int par[1005];
int grp_sz[1005];

int find(int node)
{
    if (par[node] == -1)
        return node;
    int leader = find(par[node]);
    par[node] = leader;
    return leader;
}

void dsu_union(int node1, int node2)
{
    int leader1 = find(node1);
    int leader2 = find(node2);

    if (grp_sz[leader1] >= grp_sz[leader2])
    {
        par[leader2] = leader1;
        grp_sz[leader1] += grp_sz[leader2];
    }
    else
    {
        par[leader1] = leader2;
        grp_sz[leader2] += grp_sz[leader1];
    }
}

int main()
{
    int n, e;
    cin >> n >> e;

    memset(par, -1, sizeof(par));
    memset(grp_sz, 1, sizeof(grp_sz));

    bool cycle = false;
    while (e--)
    {
        int a, b;
        cin >> a >> b;

        int leaderA = find(a);
        int leaderB = find(b);

        if (leaderA == leaderB)
            cycle = true;
        else
            dsu_union(a, b);
    }
    if (cycle)
        cout << "Cycle detected";
    else
        cout << "Cycle not detected";

    return 0;
}


/* Test Case - 01
-------------------
input:
6 6
0 1
1 2
0 4
4 5
5 3
3 4

output:
Cycle detected


Test Case - 02
-------------------
input:
6 5 
0 1
1 2
0 4
4 5
3 4

output:
Cycle not detected


Test Case - 03
-------------------
input:
3 3
0 1
0 2
1 2

output:
Cycle detected

*/