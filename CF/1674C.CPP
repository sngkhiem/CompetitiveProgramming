#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll binpow(ll a, ll b) {
    ll res = 1;
    while (b != 0) {
        if (b & 1) res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}

signed main() {
    int tS; cin >> tS;
    //cout << binpow(2,3) << "\n";
    while (tS--) {
        string s,t; cin >> s >> t;
        int cnt = 0;
        bool flag = false;
        for (int i = 0; i < t.size(); i++)
            if (t[i] == 'a') flag = true;
        if (t.size() >= 2 && flag) cout << "-1\n";
        else {
            if (t[0] != 'a' && s.size() == 1) cout << "2\n";
            else if (t[0] == 'a') cout << "1\n";
            else {
                cout << binpow(2,s.size()) << "\n";
            }
        }
    }
    return 0;
}
