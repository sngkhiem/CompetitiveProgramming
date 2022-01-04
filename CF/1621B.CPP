#include <bits/stdc++.h>

using namespace std;

const int inf = 1e9+5;

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int ans;
        int mnLeft = inf, cLeft = inf;
        int mxRight = 0, cRight = inf;
        int mxLength = 0, cLength = inf;
        for (int i = 0; i < n ; i++) {
            int l,r,c; cin >> l >> r >> c;

            // Min Left and update cheapest cost
            if (l < mnLeft) mnLeft = l, cLeft = c;
            if (l == mnLeft) cLeft = min(cLeft,c);

            //Max Right and update cheapest cost
            if (r > mxRight) mxRight = r, cRight = c;
            if (r == mxRight) cRight = min(cRight,c);

            // Update max length and update cheapest cost
            if (mxLength < r-l+1) mxLength = r-l+1, cLength = inf;
            if (mxLength == r-l+1) cLength = min(cLength,c);

            ans = cLeft+cRight;
            if (mxLength == mxRight - mnLeft + 1) ans = min(ans,cLength);
            cout << ans << "\n";
        }
    } 
    return 0;
}
