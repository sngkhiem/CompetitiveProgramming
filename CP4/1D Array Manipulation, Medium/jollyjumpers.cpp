#include <bits/stdc++.h>

using namespace std;

bool vis[3000005];

signed main() {
    int n;
    while (cin >> n) {
        memset(vis,false,sizeof vis);
        int a[n+1], flag = 0;
        if (n==1) {cout << "Jolly\n"; flag = 1;}
        for (int i = 1; i <= n; i++) cin >> a[i];
        if (!flag) {
            for (int i = 2; i <= n; i++) vis[abs(a[i]-a[i-1])] = true;
            for (int i = 1; i < n; i++) if (!vis[i]) {cout << "Not Jolly\n"; flag = 1; break;}
            if (!flag) cout << "Jolly\n";
        }
    }
    return 0;
}
