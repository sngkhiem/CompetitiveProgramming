#include <bits/stdc++.h>

using namespace std;

signed main() {
    long long n; cin >> n;
    if (n % 2 == 1) cout << (n + 1)*(n/2+1)/2 - (1+n)*(n/2)/2;
    else cout << n*(n/2)/2 - (n+2)*(n/2)/2;
    return 0;
}
