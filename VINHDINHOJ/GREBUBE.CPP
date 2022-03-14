#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n,k; cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a,a+n);
    priority_queue<int> pq; pq.push(a[n-1]);
    long long ans = a[n-1];
    for (int i = n-2; i>= 0; i--) {
        if (a[i] + k > pq.top()) {
            pq.push(a[i]);
            ans += a[i];
        } else {
            pq.pop();
            pq.push(a[i]);
        }
    }
    cout << ans;
    return 0;
}
