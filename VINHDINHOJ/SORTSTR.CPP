#include <bits/stdc++.h>

using namespace std;

bool cmp(char a, char b) {
    if (a >= 'A' && a <= 'Z' && b >= 'a' && b <= 'z') return true;
    else if (a >= 'a' && a <= 'z' && b >= 'A' && b <= 'Z') return false;
    return a > b;
}

signed main() {
    string s; cin >> s;
    char a[s.size()];
    int idx = 0;
    for (int i = 0; i < s.size(); i++) a[idx++] = s[i];
    sort(a,a+idx,cmp);
    for (int i = 0; i < s.size(); i++) cout << a[i];
    return 0;
}
