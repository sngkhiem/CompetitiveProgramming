#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n,x; cin >> n >> x; int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int l = 0, r = n-1;
    while (l < r) {
        if (a[l] + a[r] == x) {
            cout << l+1 << " " << r+1;
            return 0;
        } else if (a[l] + a[r] > x) r--;
        else l++;
    }
    cout << "No solution";
    return 0;
}
