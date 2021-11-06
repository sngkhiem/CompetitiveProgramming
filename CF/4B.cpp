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

signed main() {
    fastIO;
    int days,sum; cin >> days >> sum;
    ii memo[days];
    for (int i = 0; i < days; i++)
        cin >> memo[i].fi >> memo[i].se;
    for (int i = 0; i < days-1; i++) 
        sum -= memo[i].fi;
    if (sum < 0) cout << "NO";
    else if (sum >= memo[days-1].fi && sum <= memo[days-1].se) {
        cout << "YES\n";
        for (int i = 0; i < days-1; i++) 
            cout << memo[i].fi << " ";
        cout << sum;
    } else {
        int tmp[days]; memset(tmp,0,sizeof tmp);
        int diff = abs(sum - memo[days-1].se);
        for (int i = 0; i < days-1; i++) {
            if (diff == 0) break;
            if (diff >= memo[i].se-memo[i].fi) {
                tmp[i] = memo[i].se-memo[i].fi;
                diff -= (memo[i].se-memo[i].fi);
            } else if (diff < memo[i].se-memo[i].fi) {
                tmp[i] = diff;
                diff = 0;
            }
        }
        if (diff > 0) cout << "NO";
        else {
            cout << "YES\n";
            for (int i = 0; i < days-1; i++)
                cout << memo[i].fi+tmp[i] << " ";
            cout << memo[days-1].se;
        }
    }
    return 0;
}
