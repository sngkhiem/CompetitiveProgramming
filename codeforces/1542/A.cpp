#include <bits/stdc++.h>

using namespace std;

const int OO = 1e9;

int ans;


signed main() {
    int t; cin >> t;
    while (t--) {
        int n,odd=0,even=0,cur; cin >> n;
        for (int i = 1; i <= 2*n; i++) {
            cin >> cur;
            if (cur % 2 == 0) even++;
            else odd++;
        }
        if (even == odd || (even == 0 && odd > 2) ) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}
