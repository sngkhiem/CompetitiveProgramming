#include <bits/stdc++.h>

using namespace std;

const int inf = 1e6;

int a[105];

signed main() {
    int n,m; cin >> n >> m;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int lo = 0, hi = inf;
    while (lo <= hi) {
        int mi = (lo+hi)/2;
        int tmp = 0;
        for (int i = 1; i <= n; i++)
            if (mi < a[i]) {tmp = -1; break;}
            else tmp += (mi-a[i]);
        if (tmp < m) lo = mi+1;
        else hi = mi - 1;
    }
    cout << lo << " " << *max_element(a+1,a+1+n)+m;
    return 0;
}
