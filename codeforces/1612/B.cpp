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
#define set(a) memset(a,0,sizeof a)
#define endl "\n"

typedef long long int ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<pair<int,int>> vii;
typedef vector<pair<ll,ll>> vll;

const ll LINF = 1e18;
const int INF = 1e9;
const int MOD = 1e9+7;
const int dX[] = {1,-1,0,0};
const int dY[] = {0,0,-1,1};

signed main() {
    fastIO;
    int t; cin >> t;
    while (t--) {
        bool vis[105];
        int ans[105];
        memset(vis,false,sizeof vis);
        set(ans);
        int n,a,b; cin >> n >> a >> b;
        int idx = 2;
        ans[1] = a;
        vis[a] = true; vis[b] = true;
        int cur = 1;
        int cnt = 1;
        for (int i = n; i >= 1; i--) {
            if (cnt == n/2) break;

            if (!vis[i]) {
                cnt++;
                ans[idx++] = i;
                vis[i] = true;
            }
        }
        ans[idx++] = b;
        cnt = 1;
        for (int i = 1; i <= n; i++)
            if (!vis[i]) ans[idx++] = i;

        int mn = INF; int mx = -INF;
        for (int i = 1; i <= n/2; i++)
            mn = min(mn,ans[i]);
        for (int i = n/2+1; i <= n; i++)
            mx = max(mx,ans[i]);
        if (mn != a || mx != b) cout << "-1\n";
        else {
            for (int i = 1; i <= n; i++) cout << ans[i] << " ";
            cout << endl;
        }
    }
    return 0;
}

