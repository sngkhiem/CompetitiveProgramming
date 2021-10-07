#include <bits/stdc++.h>

using namespace std;

signed main() {
    priority_queue<int> pq;
    char query;
    while (cin >> query) {
        //if (query == 'A') break;
        if (query == '+') {
            int cur; cin >> cur;
            if (pq.size() < 15000) pq.push(cur);
        } else if (!pq.empty()) {
            int ma = pq.top();
            while (pq.top() == ma && !pq.empty()) pq.pop();
        }
    }
    int prev = -1;
    int sz = pq.size();
    vector<int> ans;
    while(!pq.empty()) {
        if (prev != pq.top()) {
            ans.push_back(pq.top());
            prev = pq.top();
            pq.pop();
        } else{
            sz--;
            pq.pop();
        }
    }
    cout << sz << "\n";
    for (auto i: ans) cout << i << "\n";
    return 0;
}
