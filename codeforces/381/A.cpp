#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n; cin >> n;
    list<int> li;
    for (int i = 1; i <= n; i++) {
        int cur; cin >> cur;
        li.push_back(cur);
    }
    int p1 = 0,p2 = 0, cur = 0;
    while (!li.empty()) {
        cur++;
        if (cur % 2 == 1) {
            if (li.front()>li.back()) {
                p1 += li.front();
                li.pop_front();
            }
            else {
                p1 += li.back();
                li.pop_back();
            }
        }
        else {
            if (li.front()>li.back()) {
                p2 += li.front();
                li.pop_front();
            }
            else {
                p2 += li.back();
                li.pop_back();
            }
        }
    }

    cout << p1 << " " << p2;
    return 0;
}
