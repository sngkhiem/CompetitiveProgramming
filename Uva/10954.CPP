#include <bits/stdc++.h>

using namespace std;

#define ll long long

signed main() {
    priority_queue<ll,vector<ll>,greater<ll>> pq;
    int n;
    while (cin >> n) {
        if (!n) break;
        for (int i = 0; i < n; i++) {
            int tmp; cin >> tmp;
            pq.push(tmp);
        }
        ll ans = 0;
        while (true) {
            ll cur1 = 0,cur2 = 0;
            if (!pq.empty()) {
                cur1 = pq.top();
                pq.pop();
            }
            if (!pq.empty()) {
                cur2 = pq.top();
                pq.pop();
            }
            ll curSum = cur1+cur2;
            ans += curSum;
            if (pq.empty()) break;
            pq.push(curSum);
        }
        cout << ans << "\n";
    }
    return 0;
}
