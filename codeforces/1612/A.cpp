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
        int x,y; cin >> x >> y;
        if ((x+y) % 2 != 0) cout << "-1 -1\n";
        else {
            if (x < y) cout << min(x,y) << " " << max(x,y) - (max(x,y) - ((x+y)/2 - min(x,y))) << endl;
            else cout << max(x,y) - (max(x,y) - ((x+y)/2 - min(x,y))) << " " << min(x,y) << endl;
        }
    }
    return 0;
}
