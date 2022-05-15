#include <bits/stdc++.h>

using namespace std;

signed main() {
    int p,c;
    int idx = 1;
    while (cin >> p >> c) {
        if (p == c && p == 0) break;
        cout << "Case " << idx++ << ":\n";
        queue<int> q;
        for (int i = 1; i <= min(p,c); i++) q.push(i);
        for (int j = 0; j < c; j++) {
            char op; cin >> op;
            if (op == 'N') {
                int tmp = q.front();
                cout << tmp << "\n"; q.pop(); q.push(tmp);
            } else {
                int cur; cin >> cur;
                queue<int> tmp;
                while (!q.empty()) {
                    if (q.front() != cur) tmp.push(q.front());
                    q.pop();
                }
                q.push(cur);
                while (!tmp.empty()) q.push(tmp.front()),tmp.pop();
            }
        }
    }
    return 0;
}
