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
        bool vis[1000];
        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = 1; i <= n; i++) {
            int x = a[i]; vis[i] = true;
            int flag = 0;
            int cnt = 1;
            for (int i = 1; i <= n; i++) vis[i] = false;
            for (int j = 1; j <= n; j++) {
                if (i != j) x = x ^ a[j], cnt++, vis[j] = true;
                if (cnt == n-1) break;
            }
            for (int i = 1; i <= n; i++)
            if (!vis[i] && x == a[i]) {cout << a[i] << "\n"; flag = 1; break;}
            if (flag) break;
        }
    }
    return 0;
}

