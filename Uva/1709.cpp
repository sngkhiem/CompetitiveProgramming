/*
    Author: sngkhiem
    Created On: 11/4/2021, 8:05:12 AM
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

signed main() {
    fastIO;
    double p,a,b,c,d; int n;
    while (cin >> p >> a >> b >> c >> d >> n) {
        //if (p == 0) break;
        double mx = -1000000005.0;
        double res = -1000000005.0;
        for (int i = 1; i <= n; i++) {
            double price = p*(sin(a*i+b)+cos(c*i+d)+2);
            res = max(res,mx-price);
            mx = max(mx,price);
        }
        if (res < 0) res = 0.0;
        cout << setprecision(6) << fixed << res << endl;
    }
    return 0;
}
