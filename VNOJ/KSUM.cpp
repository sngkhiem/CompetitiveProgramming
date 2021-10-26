/*
    Author: sngkhiem
    Created On: 10/26/2021, 9:32:25 PM
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
const int MAXN = 1e5+5;


ll a[MAXN],pref[MAXN];

signed main() {
    int n,k; cin >> n >> k;
    ll a[n+1];
    for (int i = 1; i <= n; i++) cin >> a[i];


    ll ans = -INF; pref[1] = a[1];
    for (int i = 2; i <= n; i++) pref[i] = pref[i-1]+a[i];
    for (int i = k; i <= n; i++) ans = max(ans,pref[i]-pref[i-k]);
    cout << ans;
    return 0;
}
