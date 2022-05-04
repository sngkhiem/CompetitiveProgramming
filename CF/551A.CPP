#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        int cur = 1;
        for (int j = 0; j < n; j++)
            if (a[j] > a[i]) cur++;
        cout << cur << " ";
    }
    return 0;
}
