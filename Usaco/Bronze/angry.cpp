#include <bits/stdc++.h>

using namespace std;

#define int long long

int cows[100],n, flagRight[100], flagLeft[100];

int furthestExplosionIDX(int startIDX, bool goLeft) {
    int lastExplosionIDX = startIDX;
    int radius = 1;
    while (lastExplosionIDX > 0 && lastExplosionIDX < n - 1) {
        int direction = 0;
        if (goLeft) direction = -1;
        else direction = 1;

        int nextIDX = lastExplosionIDX;
        while (nextIDX + direction >= 0 && nextIDX + direction < n && abs(cows[nextIDX + direction] - cows[lastExplosionIDX]) <= radius)
            nextIDX += direction;

        if (nextIDX == lastExplosionIDX) break;
        lastExplosionIDX = nextIDX;
        radius++;
    }
    return lastExplosionIDX;
}

signed main() {
    freopen("angry.in","r",stdin); freopen("angry.out","w",stdout);
    cin >> n;
    for (int i = 0; i < n; i++) cin >> cows[i];

    sort(cows,cows+n);
    int ans = 1;
    for (int i = 0; i < n; i++) {
        int left = furthestExplosionIDX(i,true);
        int right = furthestExplosionIDX(i,false);
        int tmpAns = right - left + 1;
        ans = max(ans,tmpAns);
    }
    cout << ans;
    return 0;
}
