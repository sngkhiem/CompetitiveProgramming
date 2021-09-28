#include <bits/stdc++.h>

using namespace std;

const int N = 105;

int a[N * 4],d[N * 4];

void buildTree(int l, int r, int curDepth = 0) {
    if (r < l) return;
    if (r == l) {
        d[l] = curDepth;
        return;
    }
    int m = l;
    for (int i = l+1; i <= r; i++)
        if (a[m] < a[i]) m = i;
    d[m] = curDepth;
    buildTree(l,m-1,curDepth+1);
    buildTree(m+1,r,curDepth+1);
}

signed main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        memset(d,0,sizeof d);
        memset(d,0,sizeof a);
        for (int i = 1; i <= n; i++) cin >> a[i];
        buildTree(1,n,0);
        for (int i = 1; i <= n; i++) cout << d[i] << " ";
        cout << "\n";
    }
    return 0;
}
