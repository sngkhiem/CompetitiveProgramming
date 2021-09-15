#include <bits/stdc++.h>

using namespace std;

signed main() {
    int s,t,n; cin >> s >> t >> n;
    int b[n+1],c[n+1],d[n+2];
    for (int i = 0; i < n+1; i++) cin >> d[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = 0; i < n; i++) cin >> c[i];

    int curTime = s;
    for (int i = 0; i < n; i++) {
        curTime += d[i];
        if (curTime < c[i]) curTime += (c[i]-curTime);
        curTime += b[i];
    }
    //cout << curTime << "\n";
    cout << (curTime+d[n] <= t ? "yes" : "no");
    return 0;
}


