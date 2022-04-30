#include <bits/stdc++.h>

using namespace std;

signed main() {
    unordered_map<string,string> l1,l2;
    int n,m; cin >> n >> m;
    for (int i = 0; i < m; i++) {
        string a,b; cin >> a >> b;
        l1[a] = b;
        l2[b] = a;
    }
    for (int i = 0; i < n; i++) {
        string tmp; cin >> tmp;
        if (l1[tmp] != "") {
            if (tmp.size() <= l1[tmp].size()) cout << tmp << " ";
            else cout << l1[tmp] << " ";
        } else {
            if (tmp.size() < l2[tmp].size()) cout << tmp << " ";
            else cout << l2[tmp] << " ";
        }
    }
    return 0;
}
