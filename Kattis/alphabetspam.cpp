#include <bits/stdc++.h>

using namespace std;

signed main() {
    string s; cin >> s;
    double cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '_') cnt1++;
        else if ((int) s[i] >= 65 && (int) s[i] <= 90) cnt3++;
        else if ((int) s[i] >= 97 && (int) s[i] <= 122) cnt2++;
        else cnt4++;
    }
    double tmp = cnt1+cnt2+cnt3+cnt4;
    cout << cnt1 / tmp << "\n" << cnt2 / tmp << "\n" << cnt3 / tmp << "\n" << cnt4 / tmp;
    return 0;
}
