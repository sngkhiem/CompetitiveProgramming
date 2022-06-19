/*
    Author: Tran Hoang Khiem
    School: Nguyen Thi Minh Khai High School
*/
#include <bits/stdc++.h>

using namespace std;

#define ll long long

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        int n,k; cin >> n >> k;
        int a[n+1],mark[n+1],pref[n+1],cnt = 0; pref[0] = 0;
        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = 1; i < n; i++) mark[i] = (a[i] < a[i+1]*2 ? 1 : 0);
        for (int i = 1; i < n; i++) pref[i] = pref[i-1] + mark[i];
        for (int i = k; i < n; i++)
            if (pref[i] - pref[i-k] == k) cnt++;
        cout << cnt << "\n";
    }
    return 0;
}

