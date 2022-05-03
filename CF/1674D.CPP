#include <bits/stdc++.h>

using namespace std;

#define ll long long

signed main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n+1],b[n+1];
        for (int i = 1; i <= n; i++) cin >> a[i],b[i]=a[i];
        sort(b+1,b+1+n);
        for (int i = n-1; i >= 1; i-=2)
            if (a[i] > a[i+1]) swap(a[i],a[i+1]);
        bool flag = true;
        for (int i = 1; i <= n; i++)
            if (a[i] != b[i]) flag = false;
        cout << (flag ? "YES\n" : "NO\n");
    }
    return 0;
}

