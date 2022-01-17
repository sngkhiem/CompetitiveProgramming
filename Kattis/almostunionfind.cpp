#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5+5;

#define int long long

int Parent[MAXN],Size[MAXN],Rank[MAXN],Sum[MAXN],Parent2[MAXN];
int n,m;

void init() {
    for (int i = 1; i <= n; i++) {
        Size[i] = 1; Sum[i] = Parent[i] = Parent2[i] = i;
    }
}

int findRoot(int x) {
    return (x == Parent[x] ? x : Parent[x] = findRoot(Parent[x]));
}

void unionSets(int x, int y) {
    x = findRoot(Parent2[x]); y = findRoot(Parent2[y]);
    if (x == y) return;
    if (Rank[x] > Rank[y]) swap(x,y);
    Parent[x] = y;
    Size[y]+=Size[x];
    Sum[y]+=Sum[x];
    if (Rank[x] == Rank[y]) Rank[y]++;
} 

void move(int x, int y) {
    int x1 = findRoot(Parent2[x]); 
    y = findRoot(Parent2[y]);
    if (x1 == y) return;
    Size[y]++; Size[x1]--;
    Sum[y]+=x; Sum[x1]-=x;
    Parent2[x] = y;
}

signed main() {
    while (cin >> n >> m) {
        if (n == 0) break;
        init();
        for (int i = 1; i <= m; i++) {
            int q; cin >> q;
            if (q == 1) {
                int a,b; cin >> a >> b;
                unionSets(a,b);
                //cout << Size[findRoot(a)] << " " << Sum[findRoot(a)] << "\n";
            } else if (q == 2) {
                int a,b; cin >> a >> b;
                move(a,b);
                //cout << Size[findRoot(a)] << " " << Sum[findRoot(a)] << "\n";
            } else {
                int x; cin >> x;
                cout << Size[findRoot(Parent2[x])] << " " << Sum[findRoot(Parent2[x])] << "\n";
            }
        }
    }
    return 0;
}
