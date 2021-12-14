#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n; cin >> n;
    string op; cin >> op;

    int mxVal = pow(2,n+1);
    int pos = 1;
    for (auto x: op) {
        pos *= 2;
        if (x == 'R') pos++;
    }
    cout << mxVal - pos;
    return 0;
}
