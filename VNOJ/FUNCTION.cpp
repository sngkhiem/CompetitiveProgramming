/*
    Author: sngkhiem
    Created On: 10/26/2021, 10:02:14 PM
    :( Code mãi nhưng vẫn gà
*/

#include <bits/stdc++.h>

using namespace std;

#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define fi first
#define se second
#define vii vector<pair<int,int>>
#define vi vector<int>
#define gcd __gcd

const ll INF = 1e18;
const ll MOD = 1e9+7;
const int dX[] = {1,-1,0,0};
const int dY[] = {0,0,-1,1};

signed main() {
    fastIO;
    ll n; cin >> n;
    if (n % 2 == 0) cout << n/2;
    else cout << -n + n/2;
    return 0;
}
