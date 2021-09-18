#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5+5;

int f1[MAXN],f2[MAXN],f3[MAXN];

signed main() {
    freopen("bcount.in","r",stdin); freopen("bcount.out","w",stdout);
    int n,q; cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        int tmp; cin >> tmp;
        if (tmp == 1) {
            f1[i] = f1[i-1] + 1;
            f2[i] = f2[i-1];
            f3[i] = f3[i-1];
        } else if (tmp == 2) {
            f2[i] = f2[i-1] + 1;
            f1[i] = f1[i-1];
            f3[i] = f3[i-1];
        } else if (tmp == 3) {
            f3[i] = f3[i-1] + 1;
            f2[i] = f2[i-1];
            f1[i] = f1[i-1];
        }
    }

    while (q--) {
        int a,b; cin >> a >> b;
        cout << f1[b] - f1[a-1] << " " << f2[b] - f2[a-1] << " " << f3[b] - f3[a-1] << "\n";
    }
    return 0;
}
