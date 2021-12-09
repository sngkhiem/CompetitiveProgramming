#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n; cin >> n;
    vector<pair<int,string>> ls;
    for (int i = 0; i < n; i++) {
        string a,b; cin >> a >> b;
        int val;
        if (a[0] >= '0' && a[0] <= '9') {
            val = stoi(a);
            val /= 2;
            ls.push_back({val,b});
        } else {
            val = stoi(b);
            ls.push_back({val,a});
        }
    }
    sort(ls.begin(),ls.end());
    for (auto x: ls) cout << x.second << endl;
    return 0;
}
