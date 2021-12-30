#include <bits/stdc++.h>

using namespace std;

int f[100005];

signed main() {
    //freopen("inp.txt","r",stdin);freopen("out.txt","w",stdout);
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; int flag = 1;
    while (cin >> n) {
        if (n == 0) break;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        memset(f,0,sizeof f);
        f[0] = a[0];
        for (int i = 1; i < n; i++)
            f[i] = max(f[i-1]+a[i],a[i]);
        int ans = -1;
        for (int i = 0; i < n; i++)
            ans = max(ans,f[i]);
        if (ans <= 0) cout << "Losing streak.\n";
        else cout << "The maximum winning streak is " << ans << ".\n";
    }
    return 0;
}
