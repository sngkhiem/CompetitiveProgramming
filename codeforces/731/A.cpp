#include <bits/stdc++.h>

using namespace std;

const int OO = 1e9;

int ans,d[1005];

signed main() {
    string s; cin >> s;

    int idx = 0;
    for (int i = int('a'); i <= int('z'); i++) {
        d[i] = idx; idx++;
    }

    int x = d[int('a')], y = d[int(s[0])];
    ans += min(abs(x-y),26-abs(x-y));
    x = y; y = d[int(s[1])];
    for (int i = 1; i < s.size(); i++) {
        ans += min(abs(x-y),26-abs(x-y));
        x = y; y = d[int(s[i+1])];
    }
    cout << ans;
    return 0;
}
