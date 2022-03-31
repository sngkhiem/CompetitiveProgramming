#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        long long sum = 0;
        long long n = s.size();
        for (int i = 0; i < s.size(); i++) sum += int(s[i]);
        cout << setprecision(6) << fixed << (double)sum / n << "\n";
    }
    return 0;
}
