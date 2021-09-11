#include <bits/stdc++.h>

using namespace std;

int cow[11][21];
vector<int> vt[21];
int k,n,ans;

signed main() {
    freopen("gymnastics.in","r",stdin); freopen("gymnastics.out","w",stdout);
    cin >> k >> n;
    for (int i = 1; i <= k; i++)
        for (int j = 1; j <= n; j++)
            cin >> cow[i][j];

    for (int i = 1; i < n; i++)
        for (int j = i+1; j <= n; j++) {
            int cnt = 0, cnt2 = 0;
            for (int p = 1; p <= k; p++) {
                int posI = -1, posJ = -1;
                for (int q = 1; q <= n; q++) {
                    if (posI == -1 && cow[p][q] == i) posI = q;
                    else if (posJ == -1 && cow[p][q] == j) posJ = q;

                    if (posI != -1 && posJ != -1 && posI < posJ) cnt++;

                    else if (posJ != -1 && posI != -1 && posJ < posI) cnt2++;
                    if (posI != -1 && posJ != -1) break;
                }
                if (cnt == k || cnt2 == k) {
                    ans++;
                    break;
                }
                if (cnt != 0 && cnt2 != 0) break;
            }
        }
    cout << ans;
    return 0;
}
