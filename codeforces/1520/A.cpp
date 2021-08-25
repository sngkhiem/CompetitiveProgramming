#include <bits/stdc++.h>

using namespace std;

const int OO = 1e9;

signed main() {
    int t; cin >> t;
    while (t--) {
        int n,d[1005],flag=0; cin >> n; string s; cin >> s;
        memset(d,-1,sizeof d);
        for (int i = 0; i < n; i++) {
            if (i-d[int(s[i])] >= 2 && d[int(s[i])] != -1) {
                cout << "NO\n";
                flag = 1;
                break;
            }
            else d[int(s[i])] = i;
        }
        if (flag == 0) cout << "YES\n";
    }
    return 0;
}
