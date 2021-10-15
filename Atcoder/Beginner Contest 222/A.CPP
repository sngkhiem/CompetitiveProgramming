#include <bits/stdc++.h>
#define int long long

using namespace std;

#define int long long

signed main() {
    string s; cin >> s;
    if (s.size() < 4) while (s.size() < 4) s = "0" + s;
    else {
        for (int i = 0; i < 4; i++) cout << s[i];
        return 0;
    }
    cout << s;
}
