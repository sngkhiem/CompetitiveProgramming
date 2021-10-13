#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n; cin >> n;
    vector<string> ans;
    ans.push_back("0"); ans.push_back("1");
    for (int i = 2; i < (1 << n); i <<= 1) {
        for (int j = i-1; j >= 0; j--)
            ans.push_back(ans[j]);

        for (int j = 0; j < i; j++)
            ans[j] = "0" + ans[j];

        for (int j = i; j < 2*i; j++)
            ans[j] = "1" + ans[j];
    }
    for (auto x: ans) cout << x << "\n";
    return 0;
}
