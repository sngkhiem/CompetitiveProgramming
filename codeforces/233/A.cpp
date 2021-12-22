#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n; cin >> n;
    if (n % 2 == 1) cout << -1;
    else {
        int a[n+1];
        for (int i = 1; i <= n; i++)
            if (i % 2 == 1) a[i] = i+1;
            else a[i] = i-1;
        for (int i = 1; i <= n; i++) cout << a[i] << " ";
    }
    return 0;
}
