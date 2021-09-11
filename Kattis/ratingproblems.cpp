#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n,k; cin >> n >> k;
    double curRated = 0;
    for (int i = 1; i <= k; i++) {
        double tmp; cin >> tmp;
        curRated += tmp;
    }
    cout << setprecision(1) << fixed << (double) (curRate+(-3*(n-k)))/n;
    return 0;
}
