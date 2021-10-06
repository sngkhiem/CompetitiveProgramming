#include <bits/stdc++.h>

using namespace std;

signed main() {
    string a,b; cin >> a >> b;
    vector<int> pos;
    int cnt = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            cnt++;
            pos.push_back(i);
        }
        if (cnt > 2) {
            cout << "No"; return 0;
        }
    }
    if (cnt == 0) cout << "Yes";
    else if (pos[1] - pos[0] == 1) cout << "Yes";
    else cout << "No";
    return 0;
}

