#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];
bool vis[1005];
int level[1005];

void bsf(int src){
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;

    while(!q.empty()){
        int parent = q.front();
        q.pop();    

        for(int child : adj_list[parent]){
            if(vis[child] == false){
                q.push(child);
                vis[child] = true;
                level[child] = level[parent] + 1;
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
        adj_list[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    int src, dst;
    cin >> src >> dst;
    bsf(src);

    /* check all level distance
    ------------------------------
    for(int i = 0; i < n; i++){
        cout << i << " -> " << level[i] << endl;
    }
    */

    cout << level[dst] << endl; 

    return 0;
}

/* Test Case: 01
------------------
input:
7 7
0 1 
1 3     
3 2
1 4
3 5
2 5
5 6
0 
6

output:
4

Test Case: 02
------------------
7 6
0 1 
1 3
3 2
1 4
2 5
5 6
0 
6

output: 
5

Test Case: 03
------------------
input: 
9 7
0 1 
1 3
3 2
1 4
2 5
5 6
7 8
0 
8

output:
-1

*/