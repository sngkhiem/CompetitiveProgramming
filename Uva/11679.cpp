/*
    Author: sngkhiem
    Created On: 11/9/2021, 4:18:47 PM
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
    int b,n; 
    while (cin >> b >> n) {
        if (b == 0 && n == 0) break;
        ll banks[b+1];
        for (int i = 1; i <= b; i++) cin >> banks[i];
        for (int i = 0; i < n; i++) {
            ll u,v,w;
            cin >> u >> v >> w;
            banks[u] -= w;
            banks[v] += w;
        }
        int flag = 0;
        for (int i = 1; i <= b; i++) 
            if (banks[i] < 0) {
                cout << "N\n";
                flag = 1;
                break;
            }
        if (flag == 0) cout << "S\n";
    }
    return 0;
}
