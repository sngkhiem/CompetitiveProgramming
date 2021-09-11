#include <bits/stdc++.h>

using namespace std;

#define int long long

const int N = 1e5+5;

int h[N], f[N];

signed main() {
    int n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> h[i];
    f[1]=0; f[2] = abs(h[2]-h[1]);
    for (int i = 3; i <= n; i++)
        f[i] = min(f[i-1]+abs(h[i]-h[i-1]),f[i-2]+abs(h[i]-h[i-2]));
    cout << f[n];
    return 0;
}
