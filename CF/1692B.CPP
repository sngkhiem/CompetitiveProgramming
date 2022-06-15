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
        int n; cin >> n;
        int freq[10005];
        for (int i = 0; i <= 10000; i++) freq[i] = 0;
        for (int i = 0; i < n; i++) {
            int cur; cin >> cur; freq[cur]++;
        }
        int cnt = 0;
        for (int i = 1; i <= 10000; i++)
            if (freq[i] > 1) cnt+=freq[i]-1;
        if (cnt % 2 == 0) cout << n - cnt << "\n";
        else cout << n - cnt - 1 << "\n";
    }
    return 0;
}

