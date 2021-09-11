#include <bits/stdc++.h>

using namespace std;

map<char,int> mark;

signed main() {
    string s; cin >> s;
    for (int i = 0; i < s.size(); i++) mark[s[i]]++;

    for (auto x: mark)
        if (x.second >= 2) {
            cout << 0; return 0;
        }
    cout << 1;
    return 0;
}
