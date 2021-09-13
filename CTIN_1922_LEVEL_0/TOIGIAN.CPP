#include <bits/stdc++.h>

using namespace std;

signed main() {
    int a,b; cin >> a >> b;
    cout << a / __gcd(a,b) << "\n" << b / __gcd(a,b);
    return 0;
}
