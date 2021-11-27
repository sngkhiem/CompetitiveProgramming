#include <bits/stdc++.h>

using namespace std;

int d[205],cnt;

signed main() {
    int n; cin >> n;
    int cur = 1;
    for (int i = 1; i <= n; i++) {
        int tmp; cin >> tmp; d[tmp] = 1;
        for (int j = i; j < tmp; j++) {
            if (d[j] == 0) cout << j << endl;
            d[j] = 1;
            cnt++;
        }
    }
    if (cnt == 0) cout << "good job";
    return 0;
}
