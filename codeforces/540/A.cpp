#include <bits/stdc++.h>

using namespace std;

const int OO = 1e9;

int ans;

signed main() {
    int n; string a,b; cin >> n; cin >> a; cin >> b;
    for (int i = 0; i < a.size(); i++) ans += min(abs(a[i]-b[i]),10-abs(a[i]-b[i]));
    cout << ans;
    return 0;
}
