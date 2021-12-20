#include <bits/stdc++.h>

using namespace std;

int a[1005][1005];
int ans [1005];
bool vis[1005];
int cnt = 0;

signed main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            int tmp; cin >> tmp;
            ans[i] |= tmp;
        }
    for (int i = 0; i < n; i++) cout << ans[i] << " ";
    return 0;
}
