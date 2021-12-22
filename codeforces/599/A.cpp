#include <bits/stdc++.h>

using namespace std;

signed main() {
    int d1,d2,d3; cin >> d1 >> d2 >> d3;
    cout << min(d1+d2+d3,min(d1*2+d2*2,min(d1*2+d3*2,d2*2+d3*2)));
    return 0;
}
