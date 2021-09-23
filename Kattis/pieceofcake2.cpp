#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n,a,b; cin >> n >> a >> b;

    int c[5] = {a,b,n-a,n-b};
    sort(c,c+5);

    cout << 4*c[4]*c[3];

}
