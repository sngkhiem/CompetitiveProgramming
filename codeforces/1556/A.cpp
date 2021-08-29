#include <bits/stdc++.h>

using namespace std;

int n,m;

signed main() {
    int t; cin >> t;
    while (t--) {
        int a,b; cin >> a >> b;
        if (a==0 && b==0) cout << "0\n";
        else if (a == b) cout << "1\n";
        else if (abs(a-b)%2==0) cout << "2\n";
        else cout << "-1\n";
    }
    return 0;
}
