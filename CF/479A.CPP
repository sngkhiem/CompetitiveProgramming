#include <bits/stdc++.h>

using namespace std;

signed main() {
    int a,b,c; cin >> a >> b >> c;
    cout << max({a+b+c,a*b*c,(a+b)*c,a*(b+c),a+b*c,a*b+c});
    return 0;
}
