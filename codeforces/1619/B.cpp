#include <bits/stdc++.h>

using namespace std;

bool vis[1000005];

signed main() {
    int t; cin >> t;
    int cnt = 0;
    while (t--) {
        int n; cin >> n;
        int a = int(sqrt(n+0.5));
        int b = int(pow(n+0.5,1.0/3));
        int c = int(pow(n+0.5,1.0/6));
        cout << a + b - c << "\n";
    }
    return 0;
}