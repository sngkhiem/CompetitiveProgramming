#include <bits/stdc++.h>

using namespace std;

const int OO = 1e9;
const int N = 1e3+5;

#define int long long

signed main() {
    int t; cin >> t;
    while (t--) {
        int n,m,X; cin >> n >> m >> X;
        int y = m - (n*m - X)/n;
        int x = n - (n*y - X);

        cout << m*x - (m - y) << "\n";
    }
    return 0;
}
