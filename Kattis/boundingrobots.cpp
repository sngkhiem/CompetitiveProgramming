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
    int w,l;
    while (cin >> w >> l) {
        if (w == 0 && l == 0) break;
        int n; cin >> n;
        int xA = 0, yA = 0, xR = 0, yR = 0;
        for (int i = 0; i < n; i++) {
            char step; cin >> step;
            int cnt; cin >> cnt;
            if (step == 'u') {
                yR += cnt;
                if (yA + cnt >= l) yA = l-1;
                else yA += cnt;
            } else if (step == 'd') {
                yR -= cnt;
                if (yA - cnt < 0) yA = 0;
                else yA -= cnt;
            } else if (step == 'r') {
                xR += cnt;
                if (xA + cnt >= w) xA = w-1;
                else xA += cnt;
            } else {
                xR -= cnt;
                if (xA - cnt < 0) xA = 0;
                else xA -= cnt;
            }
        }
        cout << "Robot thinks " << xR << " " << yR << endl;
        cout << "Actually at " << xA << " " << yA << endl;
        cout << endl;
    }
    return 0;
}
