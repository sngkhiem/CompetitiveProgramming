#include <bits/stdc++.h>
#define int long long

using namespace std;

#define int long long

signed main() {
    int n,p; cin >> n >> p;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int tmp; cin >> tmp;
        if (tmp < p) cnt++;
    }
    cout << cnt;
}
