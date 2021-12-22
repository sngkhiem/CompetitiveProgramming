#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {
    int n,m,x,y; cin >> n >> m >> x >> y;
    int a[n],b[m];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];

    pair<int,int> ans[n];
    int i = 0, j = 0, idx=0;
    while (i < n && j < m) {
        if (a[i]-x <= b[j] && a[i]+y >= b[j]) {
            ans[idx++] = {i+1,j+1};
            i++; j++;
        } else if (a[i]-x > b[j]) j++;
        else if (a[i]+y < b[j]) i++;
    }
    cout << idx << "\n";
    for (int i = 0; i < idx; i++)
        cout << ans[i].first << " " << ans[i].second << "\n";
    return 0;
}
