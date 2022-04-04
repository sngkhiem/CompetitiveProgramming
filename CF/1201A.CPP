#include <bits/stdc++.h>

using namespace std;

string s[1005];
int score[1005];
int ans = 0;

signed main() {
    int n,m; cin >> n >> m;
    int cnt[1000];
    for (int i = 0; i < n; i++) cin >> s[i];
    for (int i = 0; i < m; i++) cin >> score[i];
    for (int i = 0; i < m; i++) {
        memset(cnt,0,sizeof cnt);
        for (int j = 0; j < n; j++) cnt[s[j][i] - '0']++;
        ans += *max_element(cnt,cnt+1000)*score[i];
    }
    cout << ans;
    return 0;
}
