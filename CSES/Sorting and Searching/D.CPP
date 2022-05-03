#include <bits/stdc++.h>

using namespace std;

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,m; cin>>n>>m;
    multiset<int> tickets;
    for (int i=0; i<n; i++) {
        int tmp; cin>>tmp;
        tickets.insert(tmp);
    }
    for (int i=0; i<m; i++) {
        int tmp; cin>>tmp;
        auto it=tickets.upper_bound(tmp);
        if (it==tickets.begin()) cout<<"-1\n";
        else {
            cout<<*(--it)<<"\n";
            tickets.erase(it);
        }
    }
    return 0;
}
