#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];
bool vis[1005];

void bsf(int src){
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while(!q.empty()){
        int parent = q.front();
        q.pop();

        for(int child : adj_list[parent]){
            if(vis[child] == false){
                q.push(child);
                vis[child] = true;
            }
        }
    }
}

int main(){
    int n, e;
    cin >> n >> e;

    while(e--){
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a); // for undirected bsf
    }

    memset(vis,false, sizeof(vis));
    int src, dist;
    cin >> src >> dist;
    bsf(src);

    if(vis[dist])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

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
0 
4

output:
YES

Test Case: 02
------------------
input:
7 5
0 1 
1 3
3 2
4 6
3 5
0 
4

output:
NO

*/