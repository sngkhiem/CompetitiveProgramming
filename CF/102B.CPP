#include <bits/stdc++.h>

using namespace std;

signed main() {
    string n; cin >> n;
    int ans = 0;
    while (n.size() != 1) {
        ans++;
        string tmp1 = n;
        int tmp2 = 0;
        for (int i = 0; i < tmp1.size(); i++) tmp2 += (tmp1[i]-'0');
        tmp1 = to_string(tmp2);
        n = tmp1;
    }
    cout << ans;
    return 0;
}
