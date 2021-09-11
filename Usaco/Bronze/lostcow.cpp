#include <bits/stdc++.h>

using namespace std;

signed main() {
    freopen("lostcow.in","r",stdin); freopen("lostcow.out","w",stdout);
    int x,y; cin >> x >> y;
    int curDirection = 1;
    int curPos = x;
    int status = 1;
    int ans = 0;
    while (1 < 2) {
        if (status == 3) status = 1;

        if (status == 1) curPos = x + curDirection;
        else curPos = x - curDirection;

        if ((curPos >= y && x < y) || (curPos <= y && x > y)) {
            ans += abs(x-y);
            break;
        } else ans += curDirection*2;
        curDirection *= 2;
        status++;
    }
    cout << ans;
    return 0;
}
