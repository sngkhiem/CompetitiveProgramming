#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n,cnt=0; cin >> n;
    string ans = "";
    while (n != 0) {
        string tmp = to_string(n % 2);
        if (tmp == "1") cnt++;
        n /= 2;
        ans = tmp + ans;
    }
    cout << ans << "\n" << cnt;
    return 0;
}
