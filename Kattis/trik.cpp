#include <bits/stdc++.h>

using namespace std;

signed main() {
    int a = 1, b = 0, c = 0;
    string s; cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'A') swap(a,b);
        else if (s[i] == 'B') swap(b,c);
        else swap(a,c);
    }

    if (a == 1) cout << 1;
    else if (b == 1) cout << 2;
    else cout << 3;
    return 0;
}
