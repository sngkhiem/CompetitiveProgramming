/*
    Author: Tran Hoang Khiem
    School: Nguyen Thi Minh Khai High School
*/
#include <bits/stdc++.h>

using namespace std;

#define ll long long

vector<int> diff;

signed main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int cur; cin >> cur;
        diff.push_back(cur);
    }
    for (int i = 0; i < n; i++) {
        int cur; cin >> cur;
        diff[i] = diff[i] - cur;
    }
    sort(diff.begin(),diff.end());
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        if (diff[i] <= 0) continue;
        int j = lower_bound(diff.begin(),diff.end(),-diff[i]+1) - diff.begin();
        ans += i - j;
    }
    cout << ans;
    return 0;
}

