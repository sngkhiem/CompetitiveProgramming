#include <bits/stdc++.h>

using namespace std;

signed main() {
    int a,b; cin >> a >> b;
    if (a > b) swap(a,b);
    int cnt = 0;
    while (a != 0) {
        int tmp = b;
        b = a; a = tmp - a;
        if (a > b) swap(a,b);
        cnt++;
    }
    cout << cnt;
    return 0;
}
