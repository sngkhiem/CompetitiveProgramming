#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {
    freopen("shuffle.in","r",stdin); freopen("shuffle.out","w",stdout);
    int n; cin >> n;
    int pos[n+1], id[n+1];
    for (int i = 1; i <= n; i++) cin >> pos[i];

    for (int i = 1; i <= n; i++) cin >> id[i];

    //cout <<"\n";
    int newPos[n+1], newID[n+1];
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= n; j++) {
            newID[j] = id[pos[j]];
        }
        for (int j = 1; j <= n; j++) id[j] = newID[j];
    }

    for (int i = 1; i <= n; i++) cout << id[i] << "\n";
    return 0;
}
