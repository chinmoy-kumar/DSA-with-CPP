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

    int smallest = src;
    int second_smallest = INT_MAX;

    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        cout << parent << " ";

        if (parent < smallest)
        {
            second_smallest = smallest;
            smallest = parent;
        }
        else if (parent > smallest && parent < second_smallest)
        {
            second_smallest = parent;
        }

        for (int child : adj_list[parent])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
            }
        }
    }
    cout << endl;

    if (second_smallest == INT_MAX)
        cout << "No second smallest node found" << endl;
    else
        cout << "Second smallest number is: " <<  second_smallest << endl;
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

    cout << "Traversal is: ";
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
Traversal is: 0 1 3 4 2 5 6 
Second smallest number is: 1

*/