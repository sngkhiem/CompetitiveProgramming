#include <bits/stdc++.h>

using namespace std;

int p[1000005],r[1000005];

int findRoot(int x) {
    return (p[x] == x ? x : p[x] = findRoot(p[x]));
}

void union_sets(int x, int y) {
    x = findRoot(x); y = findRoot(y);
    if (x > y) swap(x,y);
    p[x] = y;
    if (r[x] == r[y]) r[y]++;
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,q; cin >> n >> q;
    for (int i = 0; i < n; i++) {
        p[i] = i;
        r[i] = 1;
    }
    for (int i = 0; i < q; i++) {
        char op; cin >> op;
        int a,b; cin >> a >> b;
        if (op == '?') {
            if (findRoot(a) == findRoot(b)) cout << "yes\n";
            else cout << "no\n";
        } else union_sets(a,b);
    }
    return 0;
}
