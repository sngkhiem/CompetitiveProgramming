#include <bits/stdc++.h>

using namespace std;

signed main() {
    freopen("shell.in","r",stdin); freopen("shell.out","w",stdout);
    int n; cin >> n;
    int st = 1, st2 = 2, st3 = 3;
    int ans = 0, ans2 = 0, ans3 = 0;
    for (int i = 1; i <= n; i++) {
        int a,b,guess; cin >> a >> b >> guess;

        if (st == a) st = b;
        else if (st == b) st = a;
        if (st2 == a) st2 = b;
        else if (st2 == b) st2 = a;
        if (st3 == a) st3 = b;
        else if (st3 == b) st3 = a;

        if (st == guess) ans++;
        if (st2 == guess) ans2++;
        if (st3 == guess) ans3++;
    }
    cout << max(ans,max(ans2,ans3));
    return 0;
}

