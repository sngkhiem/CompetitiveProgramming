/*
    Author: Tran Hoang Khiem
    School: Nguyen Thi Minh Khai High School
*/
#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll n,k,s,t;
pair<ll,ll> cars[200005];
ll g[200005];

bool check(ll V) {
    ll time = 0, road = 0;
    for (int i = 1; i <= k+2; i++) {
        if (i == 1) road = g[1];
        else road = g[i] - g[i-1];
        if (V - road < 0) return false;
        time += 2*road - min(V-road,road);
    }
    return time <= t;
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin >> n >> k >> s >> t;
    for (int i = 1; i <= n; i++) cin >> cars[i].first >> cars[i].second;
    for (int i = 2; i <= k+1; i++) cin >> g[i];
    g[1] = 1; g[k+2] = s;
    sort(g+1,g+3+k);
    ll lo = 1, hi = 1e9+5;
    ll fuel = -1;
    while (lo <= hi) {
        ll mi = (lo+hi)/2;
        if (check(mi)) fuel = mi, hi = mi-1;
        else lo = mi+1;
    }
    if (fuel == -1) {
        cout << fuel; return 0;
    }
    ll ans = 1e18;
    for (int i = 1; i <= n; i++)
        if (cars[i].second >= fuel) {
            ans = min(ans,cars[i].first);
        }
    cout << (ans == 1e18 ? -1 : ans);
    return 0;
}
