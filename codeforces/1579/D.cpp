#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        priority_queue<pair<int,int>> pq;
        vector<pair<int,int>> ans;
        int n; cin >> n;
        for (int i = 1; i <= n; i++) {
            int cur; cin >> cur;
            if (cur > 0) pq.push({cur,i});
        }

        while (pq.size() >= 2) {
            pair<int,int> p1 = pq.top();
            pq.pop();
            pair<int,int> p2 = pq.top();
            pq.pop();
            p1.first--; p2.first--;
            ans.push_back({p1.second,p2.second});
            if (p1.first > 0) pq.push({p1.first,p1.second});
            if (p2.first > 0) pq.push({p2.first,p2.second});
        }
        cout << ans.size() << "\n";
        for (auto x: ans) cout << x.first << " " << x.second << "\n";
        ans.clear();
    }
    return 0;
}
