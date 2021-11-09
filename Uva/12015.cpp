/*
    Author: sngkhiem
    Created On: 11/9/2021, 5:45:21 PM
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
    for (int i = 1; i <= t; i++) {
        vector<string> memo[105];
        int mx = -INF;
        for (int i = 0; i < 10; i++) {
            string s; int tmp;
            cin >> s >> tmp;
            memo[tmp].push_back(s);
            mx = max(mx,tmp);
        }
        cout << "Case #" << i << ":\n";
        for (auto x: memo[mx])
            cout << x << "\n";
        
        for (int i = 0; i < 105; i++) memo[i].clear();
    }
    return 0;
}
