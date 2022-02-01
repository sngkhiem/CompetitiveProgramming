#include <bits/stdc++.h>

using namespace std;

bool check(int n) {
    string s = to_string(n);
    for (int i = 0; i < s.size(); i++)
        if (s[i] != '4' && s[i] != '7') return false;
    return true;
}

signed main() {
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0 && check(i)) {cout << "YES"; return 0;}
    }
    cout << "NO";
    return 0;
}
