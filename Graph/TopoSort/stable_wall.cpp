/*
    Author: sngkhiem
    Created On: 10/28/2021, 4:06:12 PM
*/

#include <bits/stdc++.h>

using namespace std;

#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")

#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define fi first
#define se second
#define all(a) a.begin(),a.end()
#define gcd __gcd
#define endl "\n"

typedef long long int ll;
typedef pair<ll,ll> ii;
typedef vector<pair<int,int>> vii;
typedef vector<pair<ll,ll>> vll;

const ll LINF = 1e18;
const int INF = 1e9;
const int MOD = 1e9+7;
const int dX[] = {1,-1,0,0};
const int dY[] = {0,0,-1,1};

int r,c;
string s[30];
vector<int> adj[30];
bool vis[30],in[30];
string ans;
int flag;

void dfs(int u) {
    vis[u] = true;
    in[u] = true;
    for (auto v : adj[u])
        if (in[v] && v != u) flag = 1;
        else if (!vis[v]) dfs(v);
    in[u] = false;
    ans += (char)(u+'A');
}

signed main() {
    fastIO;
    int t; cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> r >> c;
        set<char> mem;
        for (int j = 0; j < r; j++) {
            cin >> s[j];
            for (auto c: s[j]) 
                mem.insert(c);
            if (j > 0) {
                for (int p = 0; p < c; p++) 
                    adj[s[j-1][p]-'A'].push_back(s[j][p]-'A');
            }
        }

        flag = 0; ans = "";
        memset(vis,false,sizeof vis);
        memset(in,false,sizeof in);
        for (auto c: mem) 
            if (!vis[c-'A']) dfs(c-'A');

        if (flag == 1) ans = "-1";
        cout << "Case #" << i << ": " << ans << "\n";

        for (int i = 0; i < 30; i++) adj[i].clear();
    }
    return 0;
}
