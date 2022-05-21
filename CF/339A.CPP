#include <bits/stdc++.h>

using namespace std;

string s;
vector<int> memo;

signed main() {
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != '+') memo.push_back(s[i]-'0');
    }
    sort(memo.begin(),memo.end());
    for (int i = 0; i < memo.size(); i++) {
        if (i != memo.size()-1) cout << memo[i] << "+";
        else cout << memo[i];
    }
    return 0;
}
