#include <bits/stdc++.h>

using namespace std;

int cnt[1000005];

signed main() {
    int n,m; cin >> n >> m;
    int songs[n][m];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> songs[i][j];

    int cntSongs = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cnt[songs[j][i]]++;
            if (cnt[songs[j][i]] == n) cntSongs++;
        }
        if (cntSongs == i+1) break;
    }

    vector<int> ans;
    for (int i = 0; i < cntSongs; i++) ans.push_back(songs[0][i]);
    sort(ans.begin(),ans.end());
    cout << cntSongs << endl;
    for (auto x: ans) cout << x << " ";
    return 0;
}
