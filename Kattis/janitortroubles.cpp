#include <bits/stdc++.h>

using namespace std;

signed main() {
    double s1,s2,s3,s4; cin >> s1 >> s2 >> s3 >> s4;
    double s = (s1+s2+s3+s4)/2;
    cout << setprecision(6) << fixed << sqrt((s-s1)*(s-s2)*(s-s3)*(s-s4));
    return 0;
}
