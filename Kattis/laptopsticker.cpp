#include <bits/stdc++.h>

using namespace std;

signed main() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    c += 2; d += 2;
    cout << (a >= c && b >= d ? 1 : 0);
    return 0;
}
