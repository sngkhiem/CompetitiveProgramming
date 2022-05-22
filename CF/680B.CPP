#include <bits/stdc++.h>

using namespace std;

const int maxn = 105;

int a[maxn],dist[maxn],n,k;

signed main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> a[i];
    if (a[k] == 1) dist[0] = 1;
    for (int i = k-1; i >= 1; i--)
        if (a[i] == 1) dist[k-i]++;
    for (int i = k+1; i <= n; i++)
        if (a[i] == 1) dist[i-k]++;
    int ans = 0;
    for (int i = 1; i <= max(k-1,n-k); i++)
        if (dist[i] == 2) ans+=2;
        else if (dist[i] == 1 && ((k-1 >= i && n-k < i) || (n-k >= i && k-1 < i))) ans++;
    cout << (dist[0] == 1 ? ans+1 : ans);
    return 0;
}
