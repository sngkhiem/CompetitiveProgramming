#include <bits/stdc++.h>

using namespace std;

signed main() {
    int W; cin >> W;
    int n; cin >> n;

    int rect = 0;
    while (n--) {
        int a,b;
        cin >> a >> b;
        rect += a*b;
    }
    cout << rect / W;
    return 0;
}
