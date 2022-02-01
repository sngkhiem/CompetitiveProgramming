#include <bits/stdc++.h>

using namespace std;

#define ll long long

bool check(ll n) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    ll i = 5;
    while (i <= sqrt(n)) {
        if (n % i == 0 || n % (i+2) == 0) return false;
        i += 6;
    }
    return true;
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        ll cur; cin >> cur;
        if (cur == 1) cout << "NO\n";
        else if (sqrt(cur) == ceil(sqrt(cur)) && check(sqrt(cur))) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
