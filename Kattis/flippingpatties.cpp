#include <bits/stdc++.h>

using namespace std;

int t[43205];

signed main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int d,ti; cin >> d >> ti;
        t[ti]++; t[ti-d]++; t[ti-2*d]++;
    }
    int ans = -1;
    for (int i = 0; i <= 43200; i++)
        ans = max(ans,t[i]);
    cout << (ans % 2 == 0 ? ans / 2 : ans / 2 + 1);
    return 0;
}
