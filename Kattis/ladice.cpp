#include <bits/stdc++.h>

using namespace std;

const int MAXN = 3e5+5;

int p[MAXN],Rank[MAXN],Size[MAXN],used[MAXN];

void init() {
    for (int i = 1; i < MAXN; i++) {
        Size[i] = 1;
        p[i] = i;
    }
}

int findRoot(int x) {
    return (x == p[x] ? x : p[x] = findRoot(p[x]));
}

void unionSets(int x, int y) {
    x = findRoot(x); y = findRoot(y);
    //cout << x << " " << y << "\n\n";
    if (x == y) return;
    if (Rank[x] > Rank[y]) swap(x,y);
    p[x] = p[y];
    used[y] += used[x];
    Size[y] += Size[x];
    if (Rank[x] == Rank[y]) Rank[y]++;
}

bool check(int x) {
    x = findRoot(x);
    //cout << x << "\n";
    //cout << used[x] << "\n" << size[x] << "\n";
    used[x]++;
    if (used[x] <= Size[x]) return true;
    else {
        used[x]--; return false;
    }
}

signed main() {
    init();
    int n,l; cin >> n >> l;
    for (int i = 0; i < n; i++) {
        int a,b; cin >> a >> b;
        unionSets(a,b);
        if (check(a)) cout << "LADICA\n";
        else cout << "SMECE\n";
    }
    return 0;
}
