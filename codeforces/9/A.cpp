#include <bits/stdc++.h>

using namespace std;

const int OO = 1e9;

signed main() {
    int a,b; cin >> a >> b;
    cout << (6-max(a,b)+1)/__gcd(6-max(a,b)+1,6) << "/" << 6/__gcd(6-max(a,b)+1,6);
    return 0;
}
