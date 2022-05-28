#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n; cin >> n;
    string s1 = "ROYGBIV", s2 = "GBIVGB";
    for (int i = 1; i <= n/7; i++) cout << s1;
    int tmp = 0;
    for (int i = 1; i <= n % 7; i++) {
        cout << s2[tmp++];
        if (tmp == 6) tmp = 0;
    }
    return 0;
}
