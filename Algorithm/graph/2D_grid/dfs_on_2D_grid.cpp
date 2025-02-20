#include <bits/stdc++.h>
using namespace std;

char grid[105][105];
bool vis[105][105];
vector<pair<int, int>> moveDir = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}}; // serial doesn't matter here
int n, m;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void dfs(int si, int sj)
{
    cout << si << " " << sj << endl;
    vis[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci, cj; // child i, child j
        ci = si + moveDir[i].first;
        cj = sj + moveDir[i].second;
        if (valid(ci, cj) == true && vis[ci][cj] == false)
            dfs(ci, cj);
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }

    int si, sj; // source i, source j
    cin >> si >> sj;

    memset(vis, false, sizeof(vis));
    dfs(si, sj);

    return 0;
}

/* Test Case - 01
-------------------
input:
3 4
....
....
....
1 2

output:
1 2
2 2
2 3
1 3
0 3
0 2
0 1
1 1
2 1
2 0
1 0
0 0

*/