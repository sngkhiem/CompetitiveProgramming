#include <bits/stdc++.h>

using namespace std;

signed main() {
    freopen("inp.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int n;
    while (cin >> n) {
        if (n == 0) break;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        vector<int> L1,L2,L;
        L1.resize(n+1); L2.resize(n+1); L.resize(n+1);
        for (int i = 0; i < n; i++) {
            int pos = lower_bound(L.begin(),L.end(),a[i]) - L.begin();
            if (pos == L.size()) L.push_back(a[i]);
            else L[pos] = a[i];
            L1[i] = pos+1;
        }
        reverse(a,a+n);
        L.clear();
        for (int i = 0; i < n; i++) {
            int pos = lower_bound(L.begin(),L.end(),a[i]) - L.begin();
            if (pos == L.size()) L.push_back(a[i]);
            else L[pos] = a[i];
            L2[i] = pos+1;
        }
        int best = 1;
        for (int i = 0; i < n; i++) {
            int lowest = min(L1[i],L2[n-i-1]);
            best = max(best,lowest*2-1);
        }
        cout << best << "\n";
    }
    return 0;
}
