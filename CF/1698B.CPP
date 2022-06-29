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
        int n,k; cin >> n >> k;
        int cnt = 0;
        ll a[n+1];
        for (int i = 1; i <= n; i++) cin >> a[i];
        if (k == 1) cnt = (n-1)/2;
        else for (int i = 2; i < n; i++)
                if (a[i] > a[i-1]+a[i+1]) cnt++;
        cout << cnt << "\n";

    }
    return 0;
}

