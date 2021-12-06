#include <bits/stdc++.h>

using namespace std;

signed main() {
    int d1[100],d2[100];
    memset(d1,0,sizeof d1);
    memset(d2,0,sizeof d2);
    int n; cin >> n;
    int r= 0, s = 0;
    string a,b; cin >> a >> b;
    for (int i = 0; i < n; i++)
        if (a[i] == b[i]) {
            r++;
            d1[i] = 1;
            d2[i] = 1;
        }
    for (int i = 0; i < n; i++) {
        if (d2[i] == 0) {
            d2[i] = 1;
            for (int j = 0; j < n; j++)
                if (a[j] == b[i] && d1[j] == 0 && i != j) {
                    s++;
                    d1[j] = 1;
                    break;
                }
        }
    }
    cout << r << " " << s;
    return 0;
}
