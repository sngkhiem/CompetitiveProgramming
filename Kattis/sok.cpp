#include <bits/stdc++.h>

using namespace std;

signed main() {
    double a,b,c;
    double x,y,z;
    cin >> a >> b >> c >> x >> y >> z;

    double mn = min(a/x,min(b/y,c/z));
    cout << setprecision(6) << fixed << a - mn*x << " " << b - mn*y << " " << c - mn*z;
    return 0;
}
