#include <bits/stdc++.h>

using namespace std;

#define int long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define X first
#define Y second

const int INF = 1e18;
const int dX[] = {1,-1,0,0};
const int dY[] = {0,0,-1,1};
const int MOD = 1e9+7;
const int N = 1e5;

struct Edge {
    int u,v,w;
    bool operator<(Edge const &other) {
        return w < other.w;
    }
};

int n,m,Parent[N],Rank[N],ans;
vector<Edge> g;

void make_set(int x) {
    Parent[x] = x; Rank[x] = 0;
}

int find_set(int x) {
    while (x != Parent[x]) x = Parent[x];
    return x;
}

void union_sets(int x, int y) {
    x = find_set(x); y = find_set(y);
    if (x != y) {
        if (Rank[x] < Rank[y]) swap(x,y);
        Parent[x] = Parent[y];
        if (Rank[x] == Rank[y]) Rank[x]++;
    }
}

signed main() {
    fastIO;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) make_set(i);
    for (int i = 1; i <= m; i++) {
        int u,v,w; cin >> u >> v >> w;
        g.push_back({u,v,w});
        g.push_back({v,u,w});
    }

    sort(g.begin(),g.end());
    for (Edge x: g) 
        if (find_set(x.u) != find_set(x.v)) {
            ans += x.w;
            union_sets(x.u,x.v);
        }
    cout << ans;
    return 0;
}