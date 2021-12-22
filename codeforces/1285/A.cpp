#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n; cin >> n;
    string s; cin >> s;
    int l = 0, r = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'L') l++;
        else r++;
    }
    cout << l + r + 1;
    return 0;
}
