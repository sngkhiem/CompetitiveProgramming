#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second

const int INF = 1e9;

int ans = INF;

signed main() {
    int n,a,b; cin >> n >> a >> b;
    pair<int,int> road[n];
    for (int i = 0; i < n; i++) cin >> road[i].fi >> road[i].se;
    sort(road,road+n);

    int l=0,cnt1=0,cnt2=0;
    if (road[0].se == 1) cnt1++;
    else cnt2++;
    for (int i = 1; i < n; i++) {
        if (road[i].se == 1) cnt1++;
        else cnt2++;
        if (cnt1 < a || cnt2 < b) continue;

        while (l<=i) {
            l++;
            int tmp1=cnt1,tmp2=cnt2;
            if (road[l-1].se == 1) tmp1--;
            else tmp2--;
            if (tmp1 >= a && tmp2 >= b) {
                cnt1 = tmp1; cnt2 = tmp2;
            } else {
                l--;
                break;
            }
        }
        ans = min(ans,road[i].fi-road[l].fi);
    }
    cout << (ans == INF ? -1 : ans);
    return 0;
}
