#include <bits/stdc++.h>

using namespace std;

int b[1005],cnt;

signed main() {
    int n; cin >> n; int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++)
            if (a[j] < a[i]) cnt++;
        b[i] = cnt;
        cnt = 0;
    }
    for (int i = 0; i < n; i++) cout << b[i] << " ";
    return 0;
}
