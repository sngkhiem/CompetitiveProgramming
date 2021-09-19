#include <bits/stdc++.h>

using namespace std;

const int N = 1e6+5;

int f[50005],first[N],last[N];

signed main() {
    freopen("div7.in","r",stdin); freopen("div7.out","w",stdout);
    fill(first,first+N,-1);
    fill(last,last+N,-1);
    int n; cin >> n; int a[n+1];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        f[i] = (f[i-1] + a[i]) % 7;
        if (first[f[i]] == -1) first[f[i]] = i;
        else last[f[i]] = i;
    }
    //cout << "\n";
    //for (int i = 1; i <= n; i++) cout << f[i] << " ";
    int ans = 0;
    for (int i = 1; i <= n; i++)
        if (first[f[i]] != -1 && last[f[i]] != -1) {
            ans = max(ans,last[f[i]] - first[f[i]]);
        }
    cout << ans;
    return 0;
}
