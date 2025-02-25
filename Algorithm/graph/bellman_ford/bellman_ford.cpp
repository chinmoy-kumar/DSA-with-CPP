/*-------------------------
Time Complexity: O(VxE)
-------------------------*/

#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int a, b, c;
    Edge(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

int dis[1005];
vector<Edge> edge_list;
int n, e;

void bellman_ford()
{
    for (int i = 0; i < n - 1; i++)
    {
        for (auto ed : edge_list)
        {
            int a, b, c;
            a = ed.a;
            b = ed.b;
            c = ed.c;

            if (dis[a] != INT_MAX && dis[a] + c < dis[b])
                dis[b] = dis[a] + c;
        }
    }

    bool cycle = false;
    for (auto ed : edge_list)
    {
        int a, b, c;
        a = ed.a;
        b = ed.b;
        c = ed.c;

        if (dis[a] != INT_MAX && dis[a] + c < dis[b])
            cycle = true;
    }

    if (cycle)
        cout << "Negative weighted cycle detected";
    else
    {
        for (int i = 0; i < n; i++)
            cout << i << " -> " << dis[i] << endl;
    }
}

int main()
{
    cin >> n >> e;

    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edge_list.push_back(Edge(a, b, c));
        // edge_list.push_back(Edge(b,a,c)); undirected
    }

    for (int i = 0; i < n; i++)
        dis[i] = INT_MAX;

    dis[0] = 0;

    bellman_ford();

    return 0;
}

/* Test Case - 01
-------------------
input:
4 4
0 2 5
0 3 12
2 1 2
1 3 3

output:
0 -> 0
1 -> 7
2 -> 5
3 -> 10

Test Case - 02
-------------------
input:
4 4
0 1 5
1 2 3
2 3 2
3 1 -6

output:
Negative weighted cycle detected

*/
