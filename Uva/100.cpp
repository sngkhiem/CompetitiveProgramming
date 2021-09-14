#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {
    //ios_base::sync_with_stdio(false); cin.tie(NULL);
    int a,b;
    while (cin >> a >> b) {
        int ans = 0;
        for (int i = min(a,b); i <= max(a,b); i++) {
            int cnt = 1; int cur = i;
            while (1<2) {
                if (cur == 1) break;
                else if (cur%2 != 0) cur = 3*cur+1;
                else cur /= 2;
                cnt++;
            }
            ans = max(ans,cnt);
        }
        cout << a << " " << b << " " << ans << "\n";
    }
    return 0;
}
