#include <bits/stdc++.h>

using namespace std;

int cnt[15][15];

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        for(int i=0;i<15;i++)for(int j=0;j<15;j++)cnt[i][j]=0;
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            string cur; cin >> cur;
            //Check first letter
            for (char c = 'a'; c <= 'k'; c++)
                if (c != cur[0]) ans += cnt[c-'a'][cur[1]-'a'];
            //Check second letter
            for (char c = 'a'; c <= 'k'; c++)
                if (c != cur[1]) ans += cnt[cur[0]-'a'][c-'a'];
            cnt[cur[0]-'a'][cur[1]-'a']++;
        }
        cout << ans << "\n";
    }
    return 0;
}
