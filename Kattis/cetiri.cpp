/*
    Author: sngkhiem
    Created On: 11/5/2021, 10:47:53 AM
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
    int a[3]; cin >> a[0] >> a[1] >> a[2];
    sort(a,a+3);
    int diff = min(abs(abs(a[0])-abs(a[1])),abs(abs(a[1])-abs(a[2])));
    if (a[0] + diff < a[1]) cout << a[0] + diff;
    else if (a[1] + diff < a[2]) cout << a[1] + diff;
    else cout << a[2] + diff;
    return 0;
}
