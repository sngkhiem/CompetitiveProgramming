#include <bits/stdc++.h>

using namespace std;

signed main() {
    int a,b; int c,d; int e;
    cin >> a >> b >> c >> d >> e;
    if (abs(a-c)+abs(b-d) == e) cout << "Y";
    else if (abs(a-c) + abs(b-d) < e) {
        if ((e - abs(a-c)+abs(b-d)) % 2 != 0) cout << "N";
        else cout << "Y";
    } else cout <<  "N";
    return 0;
}
