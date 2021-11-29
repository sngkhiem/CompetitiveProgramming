#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    for (int i = 1; i <= t; i++) {
        string s,t;
        cin >> s >> t;
        int a = 0, b = 0, c1 = 0, c2 = 0;
        for (int j = 0; j < s.size(); j++) {
            if (s[j] != t[j]) {
                if (s[j] == '?' && t[j] == '1') c1++;
                else if (s[j] == '?' && t[j] == '0') c2++;
                else if (s[j] == '0') b++;
                else a++;
            }
        }
        cout << "Case " << i << ": ";
        if (a > c1 + b) cout << "-1\n";
        else if (a <= b) cout << c1 + c2 + (b - a) + a << "\n";
        else if (a == b+c1) cout << a + c2 + c1<< "\n";
        else cout << a + c2 + c1 << "\n";
    }
    return 0;
}
