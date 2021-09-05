#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n, cnt = 0, ans = 0;
    cin >> n;
    string s; cin >> s;
    for (int i = 0; i < s.size(); i++)
        if (s[i] == '8') cnt++;
    if (cnt == 0) cout << 0;
    else cout << min(cnt,n/11);
    return 0;
}
