#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n; cin >> n;
    int tmp = sqrt(n);
    if (tmp*tmp >= n) cout << tmp*2;
    else if (tmp*(tmp+1) >= n) cout << tmp*2+1;
    else cout << tmp*2+2;
    return 0;
}
