#include <bits/stdc++.h>

using namespace std;

struct cmp{
    bool operator() (int a, int b) {return a > b;}
};

signed main() {
    int t; cin >> t;
    while (t--) {
        set<int,cmp> mark1;
        set<int> mark2;
        int n,s,k; cin >> n >> s >> k;
        for (int i = 0; i < k; i++) {
            int tmp; cin >> tmp;
            mark1.insert(tmp); mark2.insert(tmp);
        }
        int lo = 1, hi = n;
        while (lo <= hi) {
            int mi = (lo+hi)/2;
            string tmp = to_string(mi);
            if (mi <= s) lo = mi + 1;
            else hi = mi-1;
        }
        lo--; hi++;
        for (auto x: mark1) {
            if (lo == x) lo--;
        }
        for (auto x: mark2) {
            if (hi == x) hi++;
        }
        if (lo <= 0) cout << abs(s-hi) << "\n";
        else if (hi > n) cout << abs(s-lo) << "\n";
        else cout << min(abs(s-lo),abs(s-hi)) << "\n";
    }
    return 0;
}
