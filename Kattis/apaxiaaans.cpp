#include <bits/stdc++.h>

using namespace std;

signed main() {
    string s;
    cin >> s;

    char prev = s[0];
    for (int i = 1; i < s.size(); i++)
        if (s[i] == prev) {
            s[i-1] = '1';
            prev = s[i];
        } else prev = s[i];
    for (int i = 0; i < s.size(); i++)
        if (s[i] != '1') cout << s[i];
    return 0;
}
