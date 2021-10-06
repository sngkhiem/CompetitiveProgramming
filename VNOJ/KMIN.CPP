#include <bits/stdc++.h>

using namespace std;

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    priority_queue<int,vector<int>,greater<int>> pq;
    int m,n,k; cin >> m >> n >> k;
    int a[m],b[n];

    for (int i = 0; i < m; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            pq.push(a[i]+b[j]);
    }

    for (int i = 0; i < k; i++) {
        cout << pq.top() << "\n";
        pq.pop();
    }
    return 0;
}
