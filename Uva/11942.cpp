/*
    Author: sngkhiem
    Created On: 11/9/2021, 8:53:41 PM
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
    cout << "Lumberjacks:\n";
    while (t--) {
        int a[10];
        for (int i = 0; i < 10; i++) cin >> a[i];
        if (is_sorted(a,a+10) || is_sorted(a,a+10,greater<int>())) cout << "Ordered\n";
        else cout << "Unordered\n";
    }
    return 0;
}
