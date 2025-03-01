/*-------------------------
Time Complexity: O(𝛂(N)); Here the value of 𝛂 is near to 4
-------------------------*/

#include <bits/stdc++.h>
using namespace std;
int par[1005];
int group_size[1005];

int find(int node)
{
    if (par[node] == -1)
        return node;
    int leader = find(par[node]);
    par[node] = leader; // update parent array;
    return leader;
}

void dsu_union(int node1, int node2)
{
    int leader1 = find(node1);
    int leader2 = find(node2);

    if(group_size[leader1] >= group_size[leader2])
    {
        par[leader2] = leader1;
        group_size[leader1] += group_size[leader2];
    }
    else
    {
        par[leader1] = leader2;
        group_size[leader2] += group_size[leader1] ;
    }

}

int main()
{
    memset(par, -1, sizeof(par));
    memset(group_size, 1, sizeof(group_size));

    dsu_union(1, 2);
    dsu_union(2, 0);
    dsu_union(3, 1);

    for(int i = 0; i < 6; i++)
        cout << i << " -> " << par[i] << endl;

    return 0;
}




/* Test Case - 01
-------------------
input:
No input needed

output:
0 -> 1
1 -> -1
2 -> 1
3 -> 1
4 -> -1
5 -> -1


*/