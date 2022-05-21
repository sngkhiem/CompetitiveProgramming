#include <bits/stdc++.h>

using namespace std;

const int maxn = 1005;

int n, a[maxn];

signed main() {
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a+1,a+1+n);
    cout << (n%2==0 ? a[n/2] : a[n/2+1]);
    return 0;
}
