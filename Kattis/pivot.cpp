#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n; cin >> n; int a[n], mx[n], mn[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    mx[0] = a[0]; mn[n-1] = a[n-1];
    for (int i = 1; i < n; i++)
        if (a[i] > mx[i-1]) mx[i] = a[i];
        else mx[i] = mx[i-1];

    for (int i = n-2; i >= 0; i--)
        if (a[i] < mn[i+1]) mn[i] = a[i];
        else mn[i] = mn[i+1];
    int ans = 0;
    for (int i = 0; i < n; i++)
        if (mx[i] == mn[i]) ans++;
    cout << ans;
    return 0;
}
