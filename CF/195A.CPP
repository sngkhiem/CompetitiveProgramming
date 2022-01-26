#include <bits/stdc++.h>

using namespace std;

signed main() {
    int a,b,c; cin >> a >> b >> c;
    int rest = a*c - b*c;
    if (rest % b == 0) cout << rest/b;
    else cout << rest/b+1;
    return 0;
}
