#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main() {
    int n; cin >> n; int a[n];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    sort(a,a+n,greater<int>());
    int cur = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
        if (cur > sum-cur) break;
        cur += a[i];
        cnt++;
    }
    cout << cnt;
}
