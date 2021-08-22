#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        int cur;
        cin >> cur;
        int a[cur+1];
        for (int i = 1; i <= cur; i++) a[i] = i;
        if (cur % 2 == 0)
            for (int i = 1; i <= cur; i+=2) {
                cout << a[i+1] << " " << a[i] << " ";
            }
        else {
            swap(a[cur],a[cur-1]);
            for (int i = 1; i < cur; i+=2) {
                cout << a[i+1] << " " << a[i] << " ";
            }
            cout << a[cur];
        }
        cout << endl;
    }
    return 0;
}
