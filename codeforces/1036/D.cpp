#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n; int a[n+1];
    int sumA = 0, sumB = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sumA += a[i];
    }
    int m; cin >> m; int b[m+1];
    for (int i = 1; i <= m; i++) {
        cin >> b[i];
        sumB += b[i];
    }

    if (sumA - sumB != 0) {
        cout << -1; return 0;
    }

    int ans = 0;
    int i = 1, j = 1;
    int curA,curB;
    while (i <= n || j <= m) {
        ans++;
        curA = a[i++]; curB = b[j++];
        while (curA != curB) {
            if (curA < curB) curA += a[i++];
            else curB += b[j++];
        }
    }

    cout << ans;
    return 0;
}
