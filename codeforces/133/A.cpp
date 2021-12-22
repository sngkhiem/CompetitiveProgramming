#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main() {
    string s; cin >> s;
    size_t f = s.find("Q"), f1 = s.find("H"), f2 = s.find("9");
    if (f == string::npos && f1 == string::npos && f2 == string::npos) cout << "NO";
    else cout << "YES";
}
