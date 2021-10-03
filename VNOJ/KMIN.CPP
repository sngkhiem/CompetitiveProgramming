#include <bits/stdc++.h>

using namespace std;

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    priority_queue<int> pq;
    int m,n,k; cin >> m >> n >> k;
    int a[m],b[n];

    for (int i = 0; i < m; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    sort(a,a+m);
    sort(b,b+n);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            if (pq.size() < k) pq.push(a[i]+b[j]);
            else if (pq.size() >= k && pq.top() > a[i] + b[j]) {
                pq.pop(); pq.push(a[i]+b[j]);
            } else break;
    }

    stack<int> ans;
    while(!pq.empty()) {
        ans.push(pq.top()); pq.pop();
    }
    while(!ans.empty()) {
        cout << ans.top() << "\n";
        ans.pop();
    }
    return 0;
}
