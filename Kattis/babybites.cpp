/*
    Author: sngkhiem
    Created On: 10/31/2021, 8:25:24 AM
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
    int cur = 0;
    for (int i = 0; i < n; i++) {
        string tmp; cin >> tmp;
        if (tmp == "mumble") {
            cur++; continue;
        }
        int tmp2 = stoi(tmp,0,10);
        if (tmp2 - cur == 1) {
            cur++; continue;
        } else {
            cout << "something is fishy";
            return 0;
        }
    }
    cout << "makes sense";
    return 0;
}
