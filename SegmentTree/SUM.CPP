#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5+5;

int tree[MAXN * 4];
int nums[MAXN];

void update(int curNode, int treeLeft, int treeRight, int updatePos, int newVal) {
    if (treeLeft == treeRight) {
        tree[curNode] = newVal;
        return;
    }

    int treeMid = (treeLeft + treeRight) / 2;
    if (updatePos <= treeMid) update(curNode*2, treeLeft, treeMid, updatePos, newVal);
    else update(curNode*2+1, treeMid+1, treeRight, updatePos, newVal);
    tree[curNode] = tree[curNode*2] + tree[curNode*2+1];
}

int getSum(int curNode, int treeLeft, int treeRight, int queryLeft, int queryRight) {
    if (queryLeft > queryRight) return 0;
    if (queryLeft >= treeLeft && queryRight <= treeRight) return tree[curNode];

    int treeMid = (treeLeft+treeRight)/2;
    return getSum(curNode*2,treeLeft, treeMid, queryLeft, queryRight)
        + getSum(curNode*2+1, treeMid+1, treeRight, queryLeft, queryRight);
}

signed main() {
    int n,m; cin >> n >> m;

    while (m--) {
        char query; cin >> query;
        if (query == 'S') {
            int idx, val; cin >> idx >> val;
            update(1, 1, n, idx, val);
        } else {
            int idxLeft, idxRight; cin >> idxLeft >> idxRight;
            cout << getSum(1, 1, n, idxLeft, idxRight) << "\n";
        }
    }

    return 0;
}
