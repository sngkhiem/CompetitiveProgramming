#include <bits/stdc++.h>

using namespace std;

int pref[200005];

signed main() {
    int n,k; cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        int tmp; cin >> tmp;
        pref[i] = pref[i-1] + tmp;
    }
    int mn = 1000000000, idx = 1;
    for (int i = 1; i <= n-k+1; i++) {
        if (mn > pref[k+i-1]-pref[i-1]) {
            mn = pref[k+i-1]-pref[i-1];
            idx = i;
        }
    }
    cout << idx;
    return 0;
}
