#include <bits/stdc++.h>

using namespace std;

signed main() {
    int a,b; cin >> a >> b;
    int c;
    for (int i = 0; i <= 255; i++) {
        c = a ^ i;
        if (c == b) {
            cout << i; return 0;
        }
    }
    return 0;
}
