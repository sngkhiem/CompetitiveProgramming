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
    int n; cin >> n;
    while (n--) {
        int m; cin >> m;
        int mx = -INF, posMX;
        int memoMX;
        int sum = 0;
        int cnt = 0;
        for (int i = 1; i <= m; i++) {
            int tmp; cin >> tmp;
            sum += tmp;
            if (mx < tmp) {
                mx = tmp; posMX = i;
            } else if (mx == tmp) memoMX = tmp;
        }
        if (mx > sum / 2) cout << "majority winner " << posMX << endl;
        else if (memoMX != mx) cout << "minority winner " << posMX << endl;
        else cout << "no winner\n";

    }
    return 0;
}

