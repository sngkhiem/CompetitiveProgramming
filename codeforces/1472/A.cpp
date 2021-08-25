#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        long long a,b,c,ans=1; cin >> a >> b >> c;
        while (a%2==0) {
            a/=2; ans*=2;
        }
        while (b%2==0) {
            b/=2; ans*=2;
        }
        if (ans>=c) cout << "YES\n";
        else cout << "NO\n";

    }
    return 0;
}
