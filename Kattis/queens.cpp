#include <bits/stdc++.h>

using namespace std;

bool col[5005],row[5005],mdiag[1000005],sdiag[1000005];

signed main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int x,y; cin >> x >> y;
        if (col[y] || row[x] || mdiag[x+y] || sdiag[x-y+(n-1)]) {
            cout << "INCORRECT"; return 0;
        }
        col[y] = true; row[x] = true; mdiag[x+y] = true; sdiag[x-y+(n-1)] = true;
    }
    cout << "CORRECT";
    return 0;
}
