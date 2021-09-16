#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {
    priority_queue<int,vector<int>,greater<int>> pq;
    int q; cin >> q;
    int sum = 0;
    for (int i = 0; i < q; i++) {
        int cur,x; cin >> cur;
        if (cur == 1) {
            cin >> x;
            pq.push(x-sum);
        } else if (cur == 2) {
            cin >> x;
            sum += x;
        } else {
            x = pq.top();
            cout << x + sum << "\n";
            pq.pop();
        }
    }
    return 0;
}
