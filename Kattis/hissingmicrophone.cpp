#include <bits/stdc++.h>

using namespace std;

signed main() {
    string s; cin >> s;
    for (int i = 0; i < s.size()-1; i++)
        if (s[i] == 's' && s[i] == s[i+1]) {
            cout << "hiss"; return 0;
        }
    cout << "no hiss";
    return 0;
}
