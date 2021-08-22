#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n,m; cin >> n >> m;
    char ch;
    while (cin >> ch)
        if (ch == 'C' || ch == 'M' || ch == 'Y') {
            cout << "#Color"; return 0;
        }
    cout << "#Black&White";
    return 0;
}
