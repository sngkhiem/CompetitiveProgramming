#include <bits/stdc++.h>

using namespace std;

//#define int long long

const int MOD = 1e9+7;

signed main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        //n = n * 2;
        long long a = 1;
        for (int i = 3; i <= 2*n; i++) a = (a*i)%MOD;
        cout << a << "\n";
    }
    return 0;
}
