#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        int k; cin >> k; cout << k << " ";
        int cnt = 0;
        int a[20];
        for (int i = 0; i < 20; i++) cin >>  a[i];
        for (int i = 0; i < 19; i++)
            for (int j = i+1; j < 20; j++)
                if (a[i] > a[j]) {
                    swap(a[i],a[j]);
                    cnt++;
                }
        cout << cnt << endl;
    }

}
