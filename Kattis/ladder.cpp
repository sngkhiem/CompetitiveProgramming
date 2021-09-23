#include <bits/stdc++.h>

using namespace std;

signed main() {
    int a,b; cin >> a >> b;
    cout << ceil(a/cos((180-90-b)*M_PI/180));
    return 0;
}
