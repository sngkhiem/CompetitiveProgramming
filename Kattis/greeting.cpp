#include <bits/stdc++.h>

using namespace std;

signed main() {
    string s; cin >> s;
    cout << s[0];
    for (int i = 1; i <= (s.size()-2)*2; i++) cout << "e";
    cout << s[s.size()-1];
    return 0;
}
