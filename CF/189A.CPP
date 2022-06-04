#include <bits/stdc++.h>

using namespace std;

int f[4005];

signed main() {
    int n,a,b,c; cin >> n >> a >> b >> c;
    fill(f,f+n+1,0);
    f[0] = 0;
    for (int i = a; i <= n; i++) f[i] = max(f[i],f[i-a]+1);
    for (int i = b; i <= n; i++) f[i] = max(f[i],f[i-b]+1);
    for (int i = c; i <= n; i++) f[i] = max(f[i],f[i-c]+1);
    for (int i = 1; i <= n; i++) cout << i << " " << f[i] << "\n";
    //cout << f[n];
    return 0;
}
