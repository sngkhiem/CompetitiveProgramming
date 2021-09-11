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
const int N = 1e5+5;

int cnt,low[N],num[N],res;
vector <int> g[N];
stack<int> st;

void tarjan(int u) {
    low[u] = num[u] = ++cnt; st.push(u);
    for (auto v: g[u])
        if (num[v]) low[u] = min(low[u],num[v]);
        else {
            tarjan(v);
            low[u] = min(low[u],low[v]);
        }

    if (num[u] == low[u]) {
        res++;
        int tmp;
        do {
            tmp = st.top(); st.pop();
            num[tmp] = low[tmp] = INF; 
        } while(tmp != u);
    }
}

signed main() {
    fastIO;
    int t; cin >> t;
    while (t--) {
        int n,m; cin >> n >> m; res = 0;
        for (int i = 1; i <= m; i++) {
            int u,v; cin >> u >> v;
            g[u].push_back(v);
        }
        for (int i = 1; i <= n; i++)
            if (!num[i]) tarjan(i);
        if (res == 1) cout << "NO\n"; else cout << "YES\n";
        for (int i = 1; i <= n; i++) g[i].clear(); 
        while (!st.empty()) st.pop();
        fill(low+1,low+1+n,0); fill(num+1,num+1+n,0);
    }
    return 0;
}