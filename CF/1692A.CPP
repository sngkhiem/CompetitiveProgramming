/*
    Author: Tran Hoang Khiem
    School: Nguyen Thi Minh Khai High School
*/
#include <bits/stdc++.h>

using namespace std;

#define ll long long

signed main() {
    int t; cin >> t;
    while (t--) {
        int a,b,c,d;
        int ans = 0;
        cin >> a >> b >> c >> d;
        if (b > a) ans++;
        if (c > a) ans++;
        if (d>a) ans++;
        cout << ans << "\n";
    }
    return 0;
}

