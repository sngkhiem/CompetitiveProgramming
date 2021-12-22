#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9+1;

#define int long long

signed main() {
    int t; cin >> t;
    while (t--) {
        int n,m,k; cin >> n >> m >> k;
        int d;

        if (n == 1 && m == 0) d = 0;
        else if (n == 1 && m > 0) d = INF;
        else if (m < n-1 || m > n*(n-1)/2) d = INF;
        else {
            if (m >= n-1 && m != n*(n-1)/2) d = 2;
            else if (m == n*(n-1)/2) d = 1;
        }
        cout << (d < k - 1 ? "YES\n" : "NO\n");
    }
    return 0;
}

