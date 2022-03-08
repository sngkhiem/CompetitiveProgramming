#include <bits/stdc++.h> 

using namespace std;

signed main() {
    int n,k; cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < k; i++) {
        int cur; cin >> cur;
        if (binary_search(a,a+n,cur)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
