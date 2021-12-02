#include <bits/stdc++.h>

using namespace std;

int Start[1000005], End[1000005];

signed main() {
    int n,k; cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> Start[i];
        End[i] = Start[i] + 1000;
    }

    int idxStart = 0, idxEnd = 0;
    int maxLoad = 0, cnt = 0;
    while (idxStart < n && idxEnd < n) {
        if (Start[idxStart] < End[idxEnd]) {
            cnt++;
            idxStart++;
        } else {
            cnt--;
            idxEnd++;
        }
        maxLoad = max(maxLoad,cnt);
    }
    if (maxLoad % k != 0) cout << maxLoad / k + 1;
    else cout << maxLoad / k;
    return 0;
}
