#include <bits/stdc++.h>

using namespace std;

signed main() {
    freopen("herding.in","r",stdin); freopen("herding.out","w",stdout);
    int a[3];
    cin >> a[0] >> a[1] >> a[2]; sort(a,a+2);

    if (a[2] == a[0]+2) cout << 0 << "\n";
    else if (a[1] == a[0] + 2 || a[2] == a[1] + 2) cout << 1 << "\n";
    else cout << 2 << "\n";
    cout << max(a[1]-a[0],a[2]-a[1])-1 << "\n";
    return 0;
}
