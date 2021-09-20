#include <bits/stdc++.h>

using namespace std;

unordered_map<char,int> dict;

signed main() {
    string s; cin >> s;
    int a; cin >> a;
    for (char i = 'a'; i <= 'z'; i += 1) {
        dict[i] = a % 26; a++;
    }

    int ans = 0;
    for (int i = 0; i < s.size(); i++)
        ans += dict[s[i]];
    cout << ans;
    return 0;
}
