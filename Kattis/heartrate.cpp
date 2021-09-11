#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n; cin >> n;
    while(n--) {
        double b,p; cin >> b >> p;
        cout << setprecision(4) << fixed << (double) 60 / (p/(b-1)) << " " << (double) 60*b/p << " " << 60 / (p/(b+1)) << "\n";
    }
    return 0;
}
