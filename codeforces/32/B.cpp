#include <bits/stdc++.h>

using namespace std;

const int OO = 1e9;

signed main() {
    string s; cin >> s;
    for (int i = 0; i < s.size(); i++)
        if (s[i] == '.') cout << 0;
        else if (s[i] == '-' && s[i+1] == '.') {
            cout << 1;
            i++;
        }
        else {
            i++; cout << 2;
        }
    return 0;
}
