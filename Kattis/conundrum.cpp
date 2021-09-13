#include <bits/stdc++.h>

using namespace std;

signed main() {
    string s; cin >> s;
    int ans = s.size();
    char a[4];
    a[0] = 'R'; a[1] = 'P'; a[2] = 'E';
    for (int i = 0; i < s.size(); i++)
        if (s[i] == a[( i+1) % 3]) ans--;
    cout << ans;
    return 0;
}
