#include <bits/stdc++.h>

using namespace std;

int n;
string s;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        for (int i = 0; i < s.size(); i++)
            if (s[i] == 'D') s[i] = 'U';
            else if (s[i] == 'U') s[i] = 'D';
        cout << s << "\n";
    }
    return 0;
}

