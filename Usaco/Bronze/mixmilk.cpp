#include <bits/stdc++.h>

using namespace std;

signed main() {
    freopen("mixmilk.in","r",stdin);
    freopen("mixmilk.out","w",stdout);
    int c1,m1,c2,m2,c3,m3;
    cin >> c1 >> m1 >> c2 >> m2 >> c3 >> m3;

    int cur = 1, cnt = 1;
    while (cnt != 101) {
        if (cur == 1) {
            if (c2-m2>=m1) {
                m2 += m1;
                m1 = 0;
            }
            else {
                m1 -= (c2-m2);
                m2 += (c2-m2);
            }
        }
        else if (cur == 2) {
            if (c3-m3>=m2) {
                m3 += m2;
                m2 = 0;
            }
            else {
                m2 -= (c3-m3);
                m3 += (c3-m3);
            }
        }
        else {
            if (c1-m1>=m3) {
                m1 += m3;
                m3 = 0;
            }
            else {
                m3 -= (c1-m1);
                m1 += (c1-m1);
            }
        }
        cur++;
        if (cur == 4) cur = 1;
        cnt++;
    }
    cout << m1 << "\n" << m2 << "\n" << m3;
    return 0;
}
