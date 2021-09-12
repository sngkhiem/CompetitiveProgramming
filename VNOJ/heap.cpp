#include <bits/stdc++.h>

using namespace std;

#define int long long

struct edge {
    int u,v,w;
    bool operator< (edge& other) {
        return w < other.w;
    }
};

const int N = 1e5+5;

int n;
vector<edge> adj;
int Parent[N], Rank[N];


void make_set(int x) {
    Parent[x] = x;
    Rank[x] = 0;
}

int find_set(int x) {
    while (x != Parent[x]) x = Parent[x];
    return x;
}

void union_sets(int x, int y) {
    x = find_set(x); y = find_set(y);
    if (x != y) {
        if (Rank[x] < Rank[y]) swap(x,y);
        Parent[y] = Parent[x];
        if (Rank[x] == Rank[y]) Rank[x]++;
    }
}

signed main() {
    int cost = 0;
    int n,m; cin >> n >> m;

    for (int i = 1; i <= n; i++) make_set(i);

    for (int i = 0; i < m; i++) {
        int u,v,w; cin >> u >> v >> w;
        adj.push_back({u,v,w});
        adj.push_back({v,u,w});
    }

    sort(adj.begin(),adj.end());
    for (edge e: adj) {
        if (find_set(e.u) != find_set(e.v)) {
            cost += e.w;
            union_sets(e.u,e.v);
        }
    }

    cout << cost;
    return 0;
}
