#include <bits/stdc++.h>

using namespace std;

signed main() {
    pair<int,int> a[6];
    memset(a,0,sizeof a);
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 4; j++) {
            int cur; cin >> cur;
                a[i].first += cur;
                a[i].second = i;
        }
    }

    sort(a+1,a+6);
    cout << a[5].second << " " << a[5].first;
    return 0;
}
