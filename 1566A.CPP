#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        int n,s; cin >> n >> s;
        cout << s / (n/2+1) << "\n";
    }
    return 0;   
}
