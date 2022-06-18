#include <bits/stdc++.h>

using namespace std;

int Time[500000];

signed main() {
    int n,k, mx = -1; cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        int curRequest; cin >> curRequest;
        for (int i = curRequest; i <= curRequest+999; i++) Time[i]++, mx = max(mx,Time[i]);
    }
    cout << (mx % k == 0 ? mx/k : mx/k+1);
    return 0;
}
