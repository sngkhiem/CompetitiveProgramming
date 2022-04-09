#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll binpow(ll a, ll b, ll m) {
  ll res = 1;
  while (b > 0) {
    if (b & 1) res = res * a % m;
    a = a * a % m;
    b >>= 1;
  }
  return res;
}

signed main() {
    int c;
    while (cin >> c) {
        if (c == 0) return 0;
        ll a,b,m;
        for (int i = 0; i < c; i++) {
            cin >> a >> b >> m;
            cout << binpow(a,b,m) << "\n";
        }
    }
    return 0;
}
