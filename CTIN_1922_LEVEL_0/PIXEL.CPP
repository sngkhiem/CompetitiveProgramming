#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {
    int cnt1 = 0; int cnt2 = 0;
    int n; cin >> n; int pixel[n], d[1000001];
    fill(d+1,d+1000001,0);
    for (int i = 0; i < n; i++) {
        cin >> pixel[i];
        d[pixel[i]]++;
    }

    for (int i = 1; i <= 1000000; i++)
        if (d[i] > 0) {
          cnt1++; cnt2 = max(cnt2,d[i]);
        }
    cout << cnt1 << "\n" << cnt2;
    return 0;
}
