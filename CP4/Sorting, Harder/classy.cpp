#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<string,string> a, pair<string,string> b) {
    if (a.first == b.first) return lexicographical_compare(a.second.begin(),a.second.end(),b.second.begin(),b.second.end());
    return !lexicographical_compare(a.first.begin(),a.first.end(),b.first.begin(),b.first.end());
}

signed main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<pair<string,string>> a;
        for (int i = 1; i <= n; i++) {
            string curName; cin >> curName;
            curName.erase(curName.size()-1);
            string tmp; cin >> tmp;
            string s = "";
            for (int j = tmp.size()-1; j >= 0; j--)
                if (tmp[j] == 'u') s += tmp[j];
                else if (tmp[j] == 'm') s += tmp[j];
                else if (tmp[j] == 'o') s += 'l';
            while (s.size()<10) s+='m';
            a.push_back({s,curName});
            cin >> tmp;
        }
        sort(a.begin(),a.end(),cmp);
        for (auto x: a) cout << x.second << "\n";
        cout << "==============================\n";
    }
    return 0;
}
