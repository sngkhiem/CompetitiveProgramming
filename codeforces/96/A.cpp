#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main() {
    string s; cin >> s;
    size_t found = s.find("1111111");
    size_t found1 = s.find("0000000");
    if (found == string::npos && found1 == string::npos) cout << "NO";
    else cout << "YES";
}
