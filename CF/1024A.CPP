#include <bits/stdc++.h>

using namespace std;

#define ll long long

int memo[200];

signed main() {
    memo[0] = 1;
    for (int i = 1; i <= 100; i++) {
        memo[i]+= memo[i-1];
        memo[i*2]++;
    }
    string s; cin >> s;
    //cout << s.size() << "\n";
    if (s.size() < 2) {
        cout << 0; return 0;
    }

    if (s[0] == '1') {
        bool flag = true;
        for (int i = 1; i < s.size(); i++)
            if (s[i] == '1') {
                flag = false; break;
            }
        if (flag) {
            cout << memo[s.size()-2];
            return 0;
        }
    }
    ll ans = memo[s.size()-1];
    cout << ans; 
    return 0;
}
