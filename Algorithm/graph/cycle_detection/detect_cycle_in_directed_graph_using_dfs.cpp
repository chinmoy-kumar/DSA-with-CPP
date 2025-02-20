#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[105];
bool vis[105];
bool pathVis[105];
bool cycle;

void dfs(int src)
{
    vis[src] = true;
    pathVis[src] = true;

    for(int child : adj_list[src]){

        if(vis[child] && pathVis[child])
            cycle = true;

        if(!vis[child]){
            dfs(child);
        }
    }
    // return
    pathVis[src] = false; 
}

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
    }

    memset(vis, false, sizeof(vis));
    memset(pathVis, false, sizeof(pathVis));
    cycle = false;

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
            dfs(i);
    }
    if (cycle)
        cout << "Cycle Detected" << endl;
    else
        cout << "No Cycle Detected" << endl;

    return 0;
}

/* Test Case - 01
-------------------
input:
4 4
0 1
1 2 
2 3
3 0

output:
Cycle Detected

Test Case - 02
--------------------
input:
4 4
0 1
1 2 
2 3
0 3

output:
No Cycle Detected



Test Case - 03
--------------------
input:
6 4
0 1
1 2
2 3
4 5

output:
No Cycle Detected

*/