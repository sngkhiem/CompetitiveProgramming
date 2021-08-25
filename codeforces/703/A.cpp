#include <bits/stdc++.h>

using namespace std;

const int OO = 1e9;

signed main() {
    int n,m=0,c=0; cin >> n;
    for (int i = 1; i <= n; i++) {
        int a,b; cin >> a >> b;
        if (a>b) m++;
        else if (a<b) c++;
    }
    if (m>c) cout << "Mishka";
    else if (c>m) cout << "Chris";
    else cout << "Friendship is magic!^^";
    return 0;
}
