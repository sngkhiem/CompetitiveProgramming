#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        int n,k; cin >> n >> k;
        vector<pair<int,int>> ram;
        ram.resize(n);
        for (int i = 0; i < n; i++) {
            cin >> ram[i].first;
        }
        for (int i = 0; i < n; i++) cin >> ram[i].second;
        sort(ram.begin(),ram.end());
        for (int i = 0; i < n; i++)
            if (k >= ram[i].first) k += ram[i].second;
            else break;
        cout << k << "\n";
    }
    return 0;
}
