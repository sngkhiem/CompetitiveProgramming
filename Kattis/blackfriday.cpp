#include <bits/stdc++.h>

using namespace std;

pair<int,int> d[7];

signed main() {
    int idx = 0,mx; mx = -1;
    int n; cin >> n; int a[n];
    for (int i = 0; i < n; i++) {
        int tmp; cin >> tmp; d[tmp].first++;
        d[tmp].second = i+1;
    }
    for (int i = 1; i <= 6; i++)
        if (d[i].first == 1 && i > mx) {
            mx = i; idx = d[i].second;
        }
    if (mx == -1) cout << "none";
    else cout << idx;
    return 0;
}
