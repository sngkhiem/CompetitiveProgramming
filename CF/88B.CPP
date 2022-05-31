#include <bits/stdc++.h>

using namespace std;

vector<pair<int,int>> pos;
char g[35][35];

signed main() {
    map<char,int> memo1;
    int n,m,k; cin >> n >> m >> k;
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> g[i][j];
            if (g[i][j] == 'S') pos.push_back({i,j}),cnt++;
            else memo1[g[i][j]] = 1;
        }
    }
    for (auto x: pos) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (g[i][j] != 'S' && memo1[g[i][j]-32] != 1) {
                    int cur = 0;
                    if (sqrt((x.second-j)*(x.second-j)+(x.first-i)*(x.first-i))
                        != ceil(sqrt((x.second-j)*(x.second-j)+(x.first-i)*(x.first-i)))) {
                        cur = (int)sqrt((x.second-j)*(x.second-j)+(x.first-i)*(x.first-i)) + 1;
                    } else cur = (int)sqrt((x.second-j)*(x.second-j)+(x.first-i)*(x.first-i));
                    if (cur <= k) memo1[g[i][j]-32] = 1;
                }
            }
        }
    }
    int ans = 0;
    int q; cin >> q;
    string s; cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            if (memo1[s[i]] != 1) {
                ans = -1; break;
            }
        } else {
            if (memo1[s[i]] != 1 && cnt != 0 && memo1[s[i]+32] == 1) ans++;
            else if (cnt == 0 || memo1[s[i]+32] != 1) {
                ans = -1; break;
            }
        }
    }
    cout << ans;
    return 0;
}
