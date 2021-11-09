/*
    Author: sngkhiem
    Created On: 11/9/2021, 10:23:35 AM
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
    while (t--) {
        string s; cin >> s;
        int cur = 1;
        int ans = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'O') {
                ans += cur;
                cur++;
            } else if (s[i] == 'X') cur = 1;
        }
        cout << ans << endl;
    }
    return 0;
}
