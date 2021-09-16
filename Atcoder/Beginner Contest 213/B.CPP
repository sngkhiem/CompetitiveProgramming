#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n; cin >> n; pair<int,int> a[n];
    for (int i = 0; i < n; i++) {
        int cur; cin >> cur;
        a[i] = {cur,i+1};
    }
    sort(a,a+n);
    cout << a[n-2].second;
    return 0;
}
