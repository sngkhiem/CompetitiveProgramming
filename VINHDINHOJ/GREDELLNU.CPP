#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5+5;

int odd[maxn],even[maxn];

signed main() {
    int n; cin >> n;
    int idx1 = 0, idx2 = 0;
    for (int i = 0; i < n; i++) {
        int cur; cin >> cur;
        if (cur % 2 == 1) odd[idx1++] = cur;
        else even[idx2++] = cur;
    }
    long long ans = 0;
    sort(odd,odd+idx1); sort(even,even+idx2);
    if (idx1 == idx2) cout << 0;
    else if (idx1 > idx2) {
        for (int i = 0; i < idx1-idx2-1; i++) ans += odd[i];
        cout << ans;
    } else {
        for (int i = 0; i < idx2-idx1-1; i++) ans += even[i];
        cout << ans;
    }
    return 0;
}
