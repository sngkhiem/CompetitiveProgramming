#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {
    freopen("cowqueue.in","r",stdin); freopen("cowqueue.out","w",stdout);
    int n; cin >> n;
    pair<int,int> times[n];
    for (int i = 0; i < n; i++) {
        int Start, End; cin >> Start >> End;
        times[i] = {Start,End};
    }

    sort(times,times+n);
    int curTime = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0) curTime = times[i].first + times[i].second;
        else {
            if (times[i].first > curTime) curTime += (times[i].first-curTime + times[i].second);
            else curTime += times[i].second;
        }
    }
    cout << curTime;
    return 0;
}
