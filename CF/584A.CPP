#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n,t; cin >> n >> t;
    if (t == 10 && n == 1) {cout<<-1;return 0;}
    else if (t != 10) {
        cout << t;
        for (int i = 2; i <= n; i++) cout << 0;
    } else {
        cout << t;
        for (int i = 3; i <= n; i++) cout << 0;
    }
    return 0;
}
