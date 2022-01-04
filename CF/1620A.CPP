#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        cout << (count(s.begin(),s.end(),'N') != 1 ? "YES\n" : "NO\n");
    }
    return 0;
}
