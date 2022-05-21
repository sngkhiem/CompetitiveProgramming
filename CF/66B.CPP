#include <bits/stdc++.h>

using namespace std;

const int maxn = 1005;

int a[maxn],n,ans;

signed main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        int tmpAns = 1,cur = a[i];
        for (int j = i-1; j >= 0; j--) {
            if (a[j] <= cur) {
                tmpAns++;
                cur = a[j];
            } else break;
        }
        cur = a[i];
        for (int j = i+1; j < n; j++) {
            if (a[j] <= cur) {
                tmpAns++;
                cur = a[j];
            } else break;
        }
        ans = max(ans,tmpAns);
    }
    cout << ans;
    return 0;
}
