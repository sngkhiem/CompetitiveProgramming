#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5;
const int INF = 1e9+5;

int tree[MAXN * 4], lazy[MAXN * 4];

void down(int node) {
    tree[node*2] += lazy[node];
    tree[node*2+1] += lazy[node];
    lazy[node*2] += lazy[node];
    lazy[node*2+1] += lazy[node];
    lazy[node] = 0;

}

void update(int node, int childLeft, int childRight, int left, int right, int val) {
    if (childRight < left || childLeft > right) return;

    if (childLeft >= left && childRight <= right) {
        tree[node] += val;
        lazy[node] += val;
        return;
    }

    down(node);
    int mid = (childLeft + childRight) / 2;
    update(node*2,childLeft,mid,left,right,val);
    update(node*2+1,mid+1,childRight,left,right,val);
    tree[node] = max(tree[node*2],tree[node*2+1]);
}

int get(int node, int childLeft, int childRight, int left, int right) {
    if (childRight < left || childLeft > right) return -INF;

    if (left <= childLeft && right >= childRight) return tree[node];

    int mid = (childLeft + childRight) / 2;
    down(node);
    return max(get(node*2,childLeft,mid,left,right),
               get(node*2+1,mid+1,childRight,left,right));
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,k,m; cin >> n >> k >> m;
    while (m--) {
        int x,y; cin >> x >> y;
        if (get(1,1,n,x+1,y) < k) {
            cout << "1\n";
            update(1,1,n,x+1,y,1);
        } else {
            cout << "0\n";
        }
    }

    //for (int i = 1; i <= n*4; i++) cout << tree[i] << " ";
    return 0;
}
