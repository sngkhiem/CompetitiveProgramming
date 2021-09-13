#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n; cin >> n;
    double n1 = n, sum = 0;
    for (int i = 1; i <= n; i++) {
        double cur; cin >> cur;
        if (cur != -1 ) sum += cur;
        else n1--;
    }
    cout << sum / n1;
    return 0;
}
