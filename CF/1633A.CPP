#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        if (n % 7 == 0) {cout << n << "\n"; continue;}
        int tmp = n,cnt = 0;
        while (tmp) tmp/=10,cnt++;
        n -= (n % 10);
        for (int i = 0; i <= 9; i++)
            if ((n+i) % 7 == 0) {cout << (n+i) << "\n"; break;}
    }
    return 0;
}
