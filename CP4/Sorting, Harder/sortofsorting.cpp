#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<string,string> s1, pair<string,string> s2) {
    return s1.first < s2.first;
}

signed main() {
    int n;
    while (cin >> n) {
        if (!n) break;
        vector<pair<string,string>> names;
        for (int i = 0; i < n; i++) {
            string s; cin >> s;
            string tmp; tmp+=s[0]; tmp+=s[1];
            names.push_back({tmp,s});
        }
        stable_sort(names.begin(),names.end(),cmp);
        for (auto x: names) cout << x.second << "\n";
        cout << "\n";
    }
    return 0;
}
