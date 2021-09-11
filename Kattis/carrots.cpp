#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n,k; cin >> n >> k;
    double curRate = 0;
    for (int i = 1; i <= k; i++) {
        double tmp; cin >> tmp;
        curRate += tmp;
    }

    cout << setprecision(4) << fixed << (double) (curRate+(-3*(n-k))) / n << " " << (double) (curRate+(3*(n-k))) / n ;
    return 0;
}
