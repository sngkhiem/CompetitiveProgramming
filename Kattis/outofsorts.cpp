#include <bits/stdc++.h>

using namespace std;

#define ll long long

signed main() {
    ll n,m,a,c,x;
    cin >> n >> m >> a >> c >> x;
    vector<int> ans;
    ans.resize(n+1);
    ans[0] = x;
    for (int i = 1; i <= n; i++) ans[i] = (a*ans[i-1]+c)%m;

    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        int l = 1, r = n;
        while (l <= r) {
            int m = (l+r)/2;
            if (ans[m] < ans[i]) l = m + 1;
            else if (ans[m] > ans[i]) r = m - 1;
            else {cnt++; break;}
        }
    }
    cout << cnt;
    return 0;
}
