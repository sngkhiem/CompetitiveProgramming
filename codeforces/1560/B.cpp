#include <bits/stdc++.h>

using namespace std;

const int OO = 1e9;


signed main() {
    int t; cin >> t;
    while (t--) {
        int a,b,c; cin >> a >> b >> c;
        int tmp =abs(a-b)*2;
        if (a>tmp || b>tmp || c>tmp) cout << -1 << "\n";
        else {
            int tmp2 = tmp/2+c;
            while (tmp2>tmp) tmp2 -= tmp;
            cout << tmp2 << "\n";
        }
    }
    return 0;
}
