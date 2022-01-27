#include <bits/stdc++.h>

using namespace std;

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int cur = 0, sz = s.size();
        int ans = 0;
        for (int i = 0; i < s.size(); i++) 
            if (s[i] == 'R') {
                ans = max(ans,i+1-cur);
                cur = i+1;
            }
        ans = max(ans,sz+1-cur);
        cout << ans << "\n";
    }
    return 0;
}
