#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {
    freopen("breedflip.in","r",stdin); freopen("breedflip.out","w",stdout);
    int n; cin >> n;
    string a,b; cin >> a; cin >> b;

    int ans = 0;
    bool mark = false;
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            if (!mark) {
                ans++; mark = true;
            }
        } else mark = false;
    }
    cout << ans;
    return 0;
}
