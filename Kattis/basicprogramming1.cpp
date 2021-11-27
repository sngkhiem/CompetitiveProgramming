#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n,t; cin >> n >> t;
    int a[n];
    long long total = 0, totalEven = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
        if (a[i] % 2 == 0) totalEven += a[i];
    }
    if (t == 1) cout << 7;
    else if (t == 2) {
        if (a[0] > a[1]) cout << "Bigger";
        else if (a[0] == a[1]) cout << "Equal";
        else cout << "Smaller";
    } else if (t == 3) {
        sort(a,a+3);
        cout << a[1];
    }
    else if (t == 4) cout << total;
    else if (t == 5) cout << totalEven;
    else if (t== 6) {
        for (int i = 0; i < n; i++) a[i] %= 26;
        map<int,char> dict;
        char cur = 'a';
        for (int i = 0; i <= 25; i++) {
            dict[i] = cur;
            cur = cur + 1;
        }
        for (int i = 0; i < n; i++)
            cout << dict[a[i]];
    } else {
        bool vis[200005];
        memset(vis,false,sizeof vis);
        int idx  = a[0];
        int cnt = 1;
        while (true) {
            if (idx > n-1 || idx < 0) {
                cout << "Out";
                return 0;
            }
            if (idx == n-1) {
                cout << "Done";
                return 0;
            }
            if (vis[idx]) {
                cout << "Cyclic";
                return 0;
            }
            vis[idx] = true;
            idx = a[idx];
            cnt++;
        }
     }
    return 0;
}
