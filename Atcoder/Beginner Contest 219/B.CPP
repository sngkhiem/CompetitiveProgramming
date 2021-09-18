#include <bits/stdc++.h>

using namespace std;

signed main() {
    string a,b,c,d,ans = "";
    cin >> a >> b >> c >> d;
    for (int i = 0; i < d.size(); i++) {
        if (d[i] == '1') ans += a;
        else if (d[i] == '2') ans += b;
        else ans += c;
    }
    cout << ans;
    return 0;
}

