#include <bits/stdc++.h>

using namespace std;

#define ll long long

string s;

bool check(int x, int cnt) {
    int j = 0, tmp0 = 0, tmp1 = s.size()-cnt, mi = s.size();
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0') tmp0++;
        else tmp1--;
        while (j<i && tmp0 > x) {
            if (s[++j] == '0') tmp0--;
            else tmp1++;
        }
        if (tmp0 == x) mi = min(mi,tmp1);
    }
    if (mi <= x) return true;
    else return false;
}

signed main() {
    int t; cin >> t;
    while (t--) {
        cin >> s; s = ' ' + s;
        int cnt = 0;
        for (int i = 0; i < s.size(); i++)
            if (s[i] == '0') cnt++;
        int l = -1, r = cnt;
        while (r-l > 1) {
            int m = (l+r)/2;
            if (check(m,cnt)) r = m;
            else l = m;
        }
        cout << r << "\n";
    }
    return 0;
}

