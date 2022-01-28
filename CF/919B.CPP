#include <bits/stdc++.h>

using namespace std;

const int upper = 2e7+5;
int ans[50001];

signed main() {
    int idx = 0;
    for (int i = 1; i <= upper; i++) {
        int sum = 0;
        int tmp = i;
        while (tmp != 0) {
            int tmp2 = tmp % 10;
            sum += tmp2;
            tmp /= 10;
        }
        if (sum == 10) ans[++idx] = i;
    }
    int k; cin >> k; cout << ans[k];
    return 0;
}
