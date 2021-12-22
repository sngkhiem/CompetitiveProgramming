#include <bits/stdc++.h>

using namespace std;

const int MAXN = 200005;

vector<int> adj[MAXN];
int in_degree[MAXN],memo_in_degree[MAXN];
int mark[MAXN];
int c,p,x,l;

void kahn_algo(int u) {
    priority_queue<int,vector<int>,greater<int>> pq;
    mark[u] = true;
    for (auto v: adj[u]) {
        in_degree[v]--;
        pq.push(v);
    }
    while (!pq.empty()) {
        int u = pq.top(); pq.pop();
        
        if (mark[u]) continue;
        if (in_degree[u] <= memo_in_degree[u] / 2) {
            mark[u] = true;
            for (auto v: adj[u]) {
                in_degree[v]--;
                pq.push(v);
            }
        }
    }
}

signed main() {
    cin >> c >> p >> x >> l;
    for (int i = 0; i < p; i++) {
        int u,v; cin >> u >> v;
        adj[u].push_back(v); adj[v].push_back(u);
        in_degree[u]++; in_degree[v]++;
        memo_in_degree[u]++; memo_in_degree[v]++;
    }

    kahn_algo(l);
    if (!mark[x]) cout << "stay";
    else cout << "leave";
    return 0;
}