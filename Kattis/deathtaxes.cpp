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
    string s;
    int stocks = 0;
    double ans = 1;
    while (cin >> s) {
        double x,y;
        if (s == "buy") {
            cin >> x >> y;
            double newAVG = (stocks*ans) + (x*y);
            newAVG /= (stocks+x);
            stocks += x;
            ans = newAVG;
        } else if (s == "sell") {
            cin >> x >> y;
            stocks -= x;
        } else if (s == "split") {
            cin >> x;
            stocks *= x;
            ans /= x;
        } else if (s == "merge") {
            cin >> x;
            stocks /= x;
            ans *= x;
        } else {
            cin >> y;
            //cout << stocks << endl;
            cout << setprecision(5) << fixed << stocks * (y - (max(y - ans,0.0) * 0.3)) << endl;
            break;
        }
    }
    return 0;
}
