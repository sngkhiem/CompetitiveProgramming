#include <bits/stdc++.h>

using namespace std;

const int OO = 1e9;

signed main() {
    int t; cin >> t;
    while (t--) {
        double n; cin >> n;
        double c2 = round(n/3);
        cout << (long long)(n - c2*2) << " " << (long long)c2 << endl;
    }
    return 0;
}
