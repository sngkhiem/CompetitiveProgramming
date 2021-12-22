#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        int flag = 1;
        string s; cin >> s;
        if (s.size() % 2 == 1) {
            cout << "NO\n";
        } else {
            for (int i = 0; i < s.size()/2; i++)
              if (s[i] != s[s.size()/2+i]) {
                  cout << "NO\n";
                  flag = 0;
                  break;
              }
              if (flag) cout << "YES\n";
        }
    }
    return 0;
}