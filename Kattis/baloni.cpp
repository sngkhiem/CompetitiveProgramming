#include <bits/stdc++.h>

using namespace std;

int cnt[1000005];

signed main() {
    int n; cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int tmp; cin >> tmp;
        if (cnt[tmp] == 0) cnt[tmp-1]++;
        else {
            cnt[tmp-1]++;
            cnt[tmp]--;
        }
    }
    for (int i = 0; i < 1000000; i++)
        ans += cnt[i];
    cout << ans;
    return 0;
}
