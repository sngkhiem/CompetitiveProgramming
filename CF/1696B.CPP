/*
    Author: Tran Hoang Khiem
    School: Nguyen Thi Minh Khai High School
*/
#include <bits/stdc++.h>

using namespace std;

#define all(a) a.begin(),a.end()
#define ll long long

signed main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n+1];
        for (int i = 1; i <= n; i++) cin >> a[i];
        int ans = 0;
        bool flag = false;
        for (int i = 1; i <= n; i++) {
            if (a[i] == 0 && !flag) continue;
            else if (a[i] == 0) ans++, flag = false;
            if (a[i] != 0) flag = true;
        }
        if (flag) ans++;
        if (ans > 1 ) ans = 2;
        cout << ans << "\n";
    }
    return 0;
}

