/*
    Author: sngkhiem
    Created On: 10/29/2021, 9:14:15 PM
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
    int n; cin >> n;
    while (n--) {
        int g; cin >> g; int a[g];
        int ans;
        for (int i = 0; i < g; i++) cin >> a[i];
        for (int i = 1; i < g; i++)
            if (a[i]-a[i-1] != 1) {
                ans = i+1; break;
            }
        cout << ans << "\n";
    }
    return 0;
}
