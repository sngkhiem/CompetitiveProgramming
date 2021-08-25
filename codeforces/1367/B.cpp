#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        int n,cur,nega=0,posi=0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> cur;
            if (cur % 2 != i % 2)
                if (cur % 2 == 0) posi++;
                else nega++;
        }
        if (posi != nega) cout << -1 << endl;
        else cout << posi << endl;
    }
    return 0;
}
