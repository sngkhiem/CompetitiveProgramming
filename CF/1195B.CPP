#include <bits/stdc++.h>

using namespace std;

#define ll long long

const ll upper = 1e5+5;

signed main() {
    ll n,k; cin >> n >> k;
    ll lo = 0, hi = upper;
    while (lo <= hi) {
        ll mi = (lo+hi)/2;
        if (mi*(mi+1)/2 - k == n - mi) {cout << n-mi; return 0;}
        else if (mi*(mi+1)/2 - k < n - mi) lo = mi+1;
        else hi = mi-1;
    }
    return 0;
}
