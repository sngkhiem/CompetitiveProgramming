#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t; 
    while (t--) {
        int a,b;
        cin >> a >> b;
        if ((a*b)%2==1)cout << a*b/2+1 << endl;
        else cout << a*b/2 << endl;
    }
    return 0;
}