#include <bits/stdc++.h>

using namespace std;

const int MAXN = 2e5+5;
const int inf = 1e9;
const int MAXH = 5e5+5;

int a[MAXN],b[MAXN];
int d[MAXH];

signed main() {
    int n,h; cin >> n >> h;
    int idxLo = 0, idxHi = 0;
    for (int i = 1; i <= n; i++) {
        int tmp; cin >> tmp;
        if (i&1) a[idxLo++] = tmp;
        else b[idxHi++] = (h-tmp);
    }
    sort(a,a+idxLo); sort(b,b+idxHi);
//    cout << "\n\n";
    int ans,mn = inf;
    for (int i = 1; i <= h; i++) {
        int lo = 0, hi = idxLo-1;
        while (lo <= hi) {
            int mid = (lo+hi)/2;
            if (a[mid] < i) lo = mid + 1;
            else hi = mid - 1;
        } 
        int tmp = idxLo - lo;
            
        lo = 0, hi = idxHi-1;
        while (lo <= hi) {
            int mid = (lo+hi)/2;
            if (b[mid] < i) lo = mid+1;
            else hi = mid - 1;
        }
        //cout << lo << "\n";
        tmp += lo;
        d[tmp]++;
        if (mn > tmp) mn = tmp;
    }
    cout << mn << " " << d[mn];
    return 0;
}

