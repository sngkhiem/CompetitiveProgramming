#include <bits/stdc++.h>

using namespace std;

signed main() {
    int l,d,x; cin >> l >> d >> x;

    int minAns = 1000000, maxAns = 0;

    for (int i = l; i <= d; i++) {
        int cur = i; int tmpAns = 0;
        while (cur != 0) {
            tmpAns += cur % 10;
            cur /= 10;
        }

        if (tmpAns == x) {
            minAns = min(minAns,i);
            maxAns = max(maxAns,i);
        }

    }
    cout << minAns << "\n" << maxAns;
    return 0;
}
