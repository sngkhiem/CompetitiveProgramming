#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {
    int s,v1,v2; cin >> s >> v1 >> v2;
    int a = 0;
    int mn = 1000000000;
    pair<int,int> ans;
    while (true) {
        if ((s - a*v1) % v2 == 0 && a*v1 + (s - a*v1) == s && (s - a*v1) >= 0) {
            if (mn > a + (s - a*v1) / v2) {
                mn = a + (s - a*v1) / v2;
                ans.first = a;
                ans.second = (s - a*v1) / v2;
            }
        }
        if (a > s && mn == 1000000000) {
            cout << "Impossible";
            return 0;
        } else if (a > s && mn != 1000000000) break;
        a++;
    }
    cout << ans.first << " " << ans.second;
    return 0;
}
