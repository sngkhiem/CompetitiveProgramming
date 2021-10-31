/*
    Author: sngkhiem
    Created On: 10/31/2021, 8:17:21 PM
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
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a,a+3);
    string s; cin >> s;
    for (int i = 0; i < s.size(); i++) 
        if (s[i] == 'A') cout << a[0] << " ";
        else if (s[i] == 'B') cout << a[1] << " ";
        else cout << a[2] << " ";
    return 0;
}
