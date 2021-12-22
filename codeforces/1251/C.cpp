#include <bits/stdc++.h>

using namespace std;

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        vector<int> odd; vector<int> even;
        for (int i = 0; i < s.size(); i++)
            if ((s[i] - '0') % 2 == 0) even.push_back(s[i]-'0');
            else odd.push_back(s[i]-'0');
        int i = 0, j = 0; vector<int> ans;
        while (i < even.size() || j < odd.size()) {
            if (j == odd.size() || (i < even.size() && even[i] < odd[j]))
                ans.push_back(even[i++]);
            else ans.push_back(odd[j++]);
        }
        for (auto x: ans) cout << x;
        cout << "\n";
    }
    return 0;
}
