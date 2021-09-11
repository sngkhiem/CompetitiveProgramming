#include <bits/stdc++.h>

using namespace std;

#define int long long
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);

const int INF = 1e18;

signed main() {
    fastIO;
    int n,s; cin >> n >> s; 
    int tmp = n*(n+1)/2;

    int l = 1, r = n;
    while (l <= r) {
        int m = (l+r)/2;
        if (tmp - m == s) {cout << m; return 0;}
        else if (tmp - m > s) l = m + 1;
        else r = m - 1; 
    }

    return 0;
}