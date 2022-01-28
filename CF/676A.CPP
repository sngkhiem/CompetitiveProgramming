#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n; cin >> n;
    int a[n+1];
    int mnPos,mxPos;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] == 1) mnPos = i;
        if (a[i] == n) mxPos = i;
    }
    cout << max({abs(1-mnPos),abs(1-mxPos),abs(n-mnPos),abs(n-mxPos)});
    return 0;
}
