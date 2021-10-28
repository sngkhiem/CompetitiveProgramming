/*
    Author: sngkhiem
    Created On: 10/28/2021, 10:10:39 PM
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
    int n; char c; cin >> n >> c;
    for (int i = 1; i <= n; i++) {
        string s; cin >> s;
        int flag = 0;
        for (int j = 0; j < s.size(); j++)
            if (s[j] == c) {
                flag = 1; break;
            }
        if (flag == 0) cout << s << endl;
    }
    return 0;
}
