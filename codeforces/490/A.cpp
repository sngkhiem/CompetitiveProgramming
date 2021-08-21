#include <bits/stdc++.h>
 
using namespace std;
 
int n,a[5005],b[50005],c[5005],d,e,f;
 
signed main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int cur;
        cin >> cur;
        if (cur == 1) a[d++] = i;
        else if (cur == 2) b[e++] = i;
        else c[f++] = i;
    }
    int ans = min(d,min(e,f)); cout << ans << endl;
    for (int i = 0; i < ans; i++)
        cout << a[i] << " " << b[i] << " " << c[i] << endl;
    return 0;
}