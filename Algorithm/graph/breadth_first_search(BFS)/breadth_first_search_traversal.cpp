// time complexity: O(V + E)
// space complexity: O(V)

#include <bits/stdc++.h>
using namespace std;

// global variable
vector<int> adj_list[1005];
bool vis[1005];

// bfs traversal function
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while (!q.empty())
    {
        int parent = q.front();
        q.pop();

        cout << parent << " ";

        for (int child : adj_list[parent])
        {
            if (vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
            }
        }
    }
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
        adj_list[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));
    bfs(0);

    return 0;
}

/* Test Case: 01
------------------
input:
7 7
0 1 
1 3
1 4
3 2
4 6
3 5
4 5

output:
0 1 3 4 2 5 6 

*/