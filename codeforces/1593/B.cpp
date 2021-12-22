#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9;

int min(int a, int b) {
    return (a > b ? b : a);
}

signed main() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        if (s.size() == 2) cout  << "0\n";
        else {
            int ans = INF;
            for (int i = 0; i < s.size()-1; i++)
                for (int j = i+1; j < s.size(); j++) {
                    int tmp = (s[i]-'0')*10+(s[j]-'0');
                    if (tmp == 0 || tmp == 25 || tmp == 50 || tmp == 75) {
                        ans = min(ans,s.size()-i-2);
                    }
                }
            cout << ans << "\n";
        }
    }
    return 0;
}
