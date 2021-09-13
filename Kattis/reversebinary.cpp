#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n; cin >> n;
    string ans = "";
    while (n != 0) {
        string tmp = to_string(n % 2);
        n /= 2;
        ans = tmp + ans;
    }
    int ans1 = 0;
    for (int i = 0; i < ans.size(); i++) {
        if (ans[i] == '1') ans1 += pow(2,i);
    }
    //cout << ans;
    cout << ans1;
    return 0;
}
