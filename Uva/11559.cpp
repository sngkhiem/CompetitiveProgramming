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
    int n,b,h,w;
    while (cin >> n >> b >> h >> w) {
        //if (n == 0) break;
        int ans = INF;
        for (int i = 0; i < h; i++) {
            int tmp; cin >> tmp;
            for (int j = 0; j < w; j++) {
                int tmp2; cin >> tmp2;
                if (tmp2 >= n) ans = min(ans,n*tmp);
            }
        }
        if (ans <= b) cout << ans << endl;
        else cout << "stay home\n";
    }
    return 0;
}
