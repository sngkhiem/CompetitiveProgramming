#include <bits/stdc++.h>

using namespace std;

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int a,b,c; cin >> a >> b >> c;
    for (int i = a; i <= b; i++)
        if (i % c == 0) {
            cout << i;
            return 0;
        }
    cout << -1;
    return 0;
}
