#include <bits/stdc++.h>

using namespace std;

signed main() {
    int a[5],ans=0;
    cin >> a[1] >> a[2] >> a[3] >> a[4];
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        int cur = s[i] - '0';
        ans += a[cur];
    }
    cout << ans;
    return 0;
}
