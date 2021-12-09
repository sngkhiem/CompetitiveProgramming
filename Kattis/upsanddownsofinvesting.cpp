#include <bits/stdc++.h>

using namespace std;

signed main() {
    int s,n,m; cin >> s >> n >> m; int a[s];
    for (int i = 0; i < s; i++) cin >> a[i];
    int peaks = 0, valleys = 0;
    for (int i = n-1; i < s-n+1; i++) {
        bool check = true;
        for (int j = 0; j < n-1; j++) {
            if (a[i+j] > a[i+j+1] && a[i-j] > a[i-j-1]) continue;
            check = false; break;
        }
        if (check) peaks++;
    }

    for (int i = m-1; i < s-m+1; i++) {
        bool check = true;
        for (int j = 0; j < m-1; j++) {
            if (a[i+j] < a[i+j+1] && a[i-j] < a[i-j-1]) continue;
                check = false; break;
        }
        if (check) valleys++;
    }
    cout << peaks << " " << valleys;
}
