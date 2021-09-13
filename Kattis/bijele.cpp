#include <bits/stdc++.h>

using namespace std;

signed main() {
    int a,b,c,d,e,f; cin >> a >> b >> c >> d >> e >> f;

    if (a == 1) cout << 0 << " ";
    else if (a < 1) cout << 1 - a << " ";
    else cout << 1 - a << " ";

    if (b == 1) cout << 0 << " ";
    else if (b < 1) cout << 1 - b << " ";
    else cout << 1 - b << " ";

    if (c == 2) cout << 0 << " ";
    else if (c < 2) cout << 2 - c << " ";
    else cout << 2 - c << " ";

    if (d == 2) cout << 0 << " ";
    else if (d < 2) cout << 2 - d << " ";
    else cout << 2 - d << " ";

    if (e == 2) cout << 0 << " ";
    else if (e < 2) cout << 2 - e << " ";
    else cout << 2 - e << " ";

    if (f == 8) cout << 0 << " ";
    else if (f < 8) cout << 8 - f << " ";
    else cout << 8 - f << " ";
    return 0;
}
