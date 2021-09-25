#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n,p,s; cin >> n >> p >> s;
    while (s--) {
        int m;
        int flag = 0;
        cin >> m;
        while (m--) {
            int cur; cin >> cur;
            if (cur == p) flag = 1;
        }
        cout << (flag == 1 ? "KEEP\n" : "REMOVE\n");
    }
    return 0;
}
