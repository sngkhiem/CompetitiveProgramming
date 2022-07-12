/*
    Author: Tran Hoang Khiem
    School: Nguyen Thi Minh Khai High School
*/
#include <bits/stdc++.h>

using namespace std;

#define all(a) a.begin(),a.end()
#define ll long long

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n+1];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) {
            int m; cin >> m;
            while (m--) {
                char q; cin >> q;
                if (q == 'U') {
                    if (a[i]-1 == -1) a[i] = 9;
                    else a[i]--;
                } else {
                    if (a[i]+1 == 10) a[i] = 0;
                    else a[i]++;
                }
            }
        }
        for (int i = 0; i < n; i++) cout << a[i] << " ";
        cout << "\n";
    }
    return 0;
}

