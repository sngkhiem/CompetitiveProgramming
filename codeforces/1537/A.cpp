#include <bits/stdc++.h>

using namespace std;

#define int long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

const int INF = 1e18;

signed main() {
    fastIO;
    int t; cin >> t;
    while (t--) {
        int n,sum=0; cin >> n; 
        for (int i = 0; i < n; i++) {
            int cur; cin >> cur;
            sum += cur;
        }
        if (sum <= 0 || sum < n) cout << "1\n";
        else cout << sum-n << "\n";
    }
    return 0;
}