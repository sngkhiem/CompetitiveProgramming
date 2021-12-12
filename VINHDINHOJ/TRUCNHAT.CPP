#include <bits/stdc++.h>

using namespace std;

int lcm(int a, int b) {
    return a*b/__gcd(a,b);
}

signed main() {
    int a,b; cin >> a >> b;
    cout << lcm(a,b) << endl;
    cout << "An: " << lcm(a,b) / a << endl;
    cout << "Bach: " << lcm(a,b) / b;
    return 0;
}
