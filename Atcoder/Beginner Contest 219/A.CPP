#include <bits/stdc++.h>

using namespace std;

signed main() {
    int x; cin >> x;
    if (x >= 90) cout << "expert";
    else if (x >= 70 && x < 90) cout << abs(x - 90);
    else if (x >= 40 && x < 70) cout << abs(x - 70);
    else cout << abs(x - 40);
    return 0;
}
