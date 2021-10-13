#include <bits/stdc++.h>

using namespace std;

signed main() {
    string s; cin >> s;
    int cnt = 0;
    vector<string> ans;
    sort(s.begin(),s.end());
    do {
        ans.push_back(s);
        cnt++;
    } while(next_permutation(s.begin(),s.end()));
    cout << cnt << "\n";
    for (auto x: ans) cout << x << "\n";
    return 0;
}
