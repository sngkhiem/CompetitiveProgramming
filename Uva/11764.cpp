/*
    Author: sngkhiem
    Created On: 10/31/2021, 8:03:47 AM
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
    int t; cin >> t;
    for (int j = 1; j <= t; j++) {
        int n; cin >> n;
        int prev,high = 0, low = 0;
        for (int i = 0; i < n; i++) {
            int tmp; cin >> tmp;
            if (i == 0) {
                prev = tmp; continue;
            }
            if (tmp > prev) {
                high++; prev = tmp;
            } else if (tmp < prev) {
                low++; prev = tmp;
            }
        }
        cout << "Case " << j << ": " << high << " " << low << "\n";
    }
    return 0;
}
