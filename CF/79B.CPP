#include <bits/stdc++.h>

using namespace std;

vector<pair<int,int>> a;

signed main() {
    int n,m,k,t; cin >> n >> m >> k >> t;
    while (k--) {
        int i,j; cin >> i >> j;
        a.push_back({i,j});
    }
    sort(a.begin(),a.end());
    while (t--) {
        int i,j; cin >> i >> j;
        int cnt = 0, cur = 0, cur1, cur2;
        for (auto x: a) {
            if (x.first == i && x.second == j) {
                cout << "Waste\n";
                cur = -1;
                break;
            } else if (x.first > i) break;
            else if (x.first == i && x.second > j) break;
            else cnt++;
        }
        if (cur == -1) continue;

        cur = ((i-1)*m+j)-cnt;
        if (cur % 3 == 1) cout << "Carrots\n";
        else if (cur % 3 == 2) cout << "Kiwis\n";
        else if (cur % 3 == 0) cout << "Grapes\n";
    }
    return 0;
}
