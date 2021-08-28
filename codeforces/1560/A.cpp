#include <bits/stdc++.h>

using namespace std;

const int OO = 1e9;

int ans;
set<int> nums;

signed main() {
    int t; cin >> t;
    for (int i = 1; i <= 5000; i++) nums.insert(i);
    for (int i = 1; i <= 5000; i++)
        if (i % 10 == 3 || i % 3 == 0) nums.erase(i);

    while (t--) {
        int k; cin >> k;
        int idx = 0;
        for (auto x: nums) {
            idx++;
            if (k == idx) {
                cout << x << "\n"; break;
            }
        }
    }
    return 0;
}
