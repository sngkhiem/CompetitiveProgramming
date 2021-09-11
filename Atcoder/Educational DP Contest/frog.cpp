#include <bits/stdc++.h>

using namespace std;

#define int long long

const int N = 1e5+5;
const int INF = 1e18;

int h[N],f[N];

signed main() {
    int n,k; cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> h[i];
    fill(f+1,f+1+n,INF);
    f[1] = 0; f[2] = abs(h[1]-h[2]);
    for (int i = 3; i <= n; i++)
        for (int j = 1; j <= min(i,k); j++)
            if (j != i) f[i] = min(f[i-j]+abs(h[i]-h[i-j]),f[i]);
    cout << f[n];
    return 0;
}
