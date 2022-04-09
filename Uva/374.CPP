#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll binpow(ll a, ll b,ll c) {
    a %= c;
    ll res = 1;
    while (b > 0) {
        if ( b & 1) res = res * a % c;
        a = a * a % c;
        b >>= 1;
    }
    return res;
}

signed main() {
    ll a,b,c;
    while (cin >> a >> b >> c) {
        cin.ignore();
        cout << binpow(a,b,c) << "\n";
    }
    return 0;
}
