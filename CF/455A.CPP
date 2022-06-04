#include <bits/stdc++.h>

using namespace std;

#define int long long

int f[100005], freq[100005];

signed main() {
    int n,mx = -1e9; cin >> n;
    for (int i = 0; i < n; i++) {
        int cur; cin >> cur; freq[cur]++;
        mx = max(mx,cur);
    }
    f[0] = 0; f[1] = freq[1]*1;
    for (int i = 2; i <= mx; i++)
        f[i] = max(f[i-1],f[i-2]+freq[i]*i);
    cout << f[mx];
    return 0;
}
