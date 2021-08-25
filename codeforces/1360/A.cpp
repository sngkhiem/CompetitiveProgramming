#include <bits/stdc++.h>

using namespace std;

const int OO = 1e9;

signed main() {
    int t; cin >> t;
    while (t--) {
        int a,b; cin >> a >> b;
        if (min(a,b)*2>=max(a,b)) cout << min(a,b)*2*min(a,b)*2 << endl;
        else cout << max(a,b)*max(a,b) << endl;
    }
    return 0;
}
