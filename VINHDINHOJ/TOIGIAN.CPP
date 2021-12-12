#include <bits/stdc++.h>

using namespace std;

long long lcm(long long a, long long b) {
    return a*b/__gcd(a,b);
}

signed main() {
    long long a,b,c,d;
    while (cin >> a >> b >> c >> d) {
        if (b == d) {
            cout << (a+c) / __gcd(a+c,b) << "/" << b / __gcd(a+c,b) << endl;
        }
        else {
            int fi = __gcd(a,b); int se = __gcd(c,d);
            a = a / fi;
            b = b / fi;
            c = c / se;
            d = d / se;
            //cout << a << " " << b << " " << c << " " << d << endl;
            long long tu = a*(lcm(b,d)/b) + c*(lcm(b,d)/d);
            long long mau = lcm(b,d);
            cout << tu / __gcd(tu,mau) << "/" << mau / __gcd(tu,mau) << endl;
        }
    }
    return 0;
}
