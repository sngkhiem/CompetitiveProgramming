#include <bits/stdc++.h>

using namespace std;

signed main() {
    string s; cin >> s;

    for (int i = 0; i < s.size(); i++)
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;

    for (int i = 0; i < s.size(); i++)
        if (s[i] == 'a' || s[i] == 'o' || s[i] == 'y' || s[i] == 'e'
            || s[i] == 'u' || s[i] == 'i') s[i] = '1';

    for (int i = 0; i < s.size(); i++) {
        if (s[i] != '1') cout << '.' << s[i];
    }
    return 0;
}
