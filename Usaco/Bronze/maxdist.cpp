#include <bits/stdc++.h>

using namespace std;

#define int long long

const int N = 5e5+5;

int x[N],y[N];

signed main() {
    int n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> x[i];
    for (int i = 1; i <= n; i++) cin >> y[i];


    int ans = 0,dX,dY;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) {
            dX = x[i] - x[j];
            dY = y[i] - y[j];
            ans = max(dX*dX+dY*dY,ans);
        }
    cout << ans;
    return 0;
}
