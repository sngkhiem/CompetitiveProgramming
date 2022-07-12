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
        int a[n+1], pref[n+1], pref2[n+1];
        vector<int> mark; mark.resize(n+1);
        memset(pref,0,sizeof pref);
        memset(pref2,0,sizeof pref2);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            mark[i] = i;
        }

        ll ans = 0;
        for (int i = 1; i <= n; i++) {
            pref[i] = pref[i-1];
            if (a[i] < i) pref[i]++;
        }

        for (int i = n; i >= 1; i--) {
            if (a[i] < i) {
                auto it = lower_bound(mark.begin(),mark.end(),a[i]);
                if (it == mark.end()) ans += pref[n-1];
                else {
                    if (it == mark.begin()) continue;
                    it--;
                    ans += pref[*it];
                }
            }
        }

        cout << ans << "\n";
    }
    return 0;
}

