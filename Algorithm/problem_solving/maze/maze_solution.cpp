#include <bits/stdc++.h>
using namespace std;

char grid[1005][1005];
bool vis[1005][1005];
pair<int, int> parent[1005][1005];
int n, m;

vector<pair<int, int>> moveDir = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m || (grid[i][j] != '.' && grid[i][j] 
        != 'D'))
        return false;
    return true;
}

void bfs(int si, int sj, int di, int dj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    parent[si][sj] = {-1, -1};

    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();

        int par_i = par.first;
        int par_j = par.second;

        if (par_i == di && par_j == dj) {
            int ci = di, cj = dj;
            while (parent[ci][cj].first != -1 && parent[ci][cj].second != -1) 
            {
                if (grid[ci][cj] != 'D') {
                    grid[ci][cj] = 'X';
                }
                int prev_i = parent[ci][cj].first;
                int prev_j = parent[ci][cj].second;
                ci = prev_i;
                cj = prev_j;
            }
        }
        

        for (auto move : moveDir)
        {
            int ci = par_i + move.first;
            int cj = par_j + move.second;

            if (valid(ci, cj) && !vis[ci][cj])
            {
                vis[ci][cj] = true;
                q.push({ci, cj});
                parent[ci][cj] = {par_i, par_j};
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    int si = 0, sj = 0, di = 0, dj = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'R')
            {
                si = i;
                sj = j;
            }
            if (grid[i][j] == 'D')
            {
                di = i;
                dj = j;
            }
        }
    }

    memset(vis, false, sizeof(vis));
    bfs(si, sj, di, dj);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << grid[i][j];
        }
        cout << endl;
    }

    return 0;
}
