#include <bits/stdc++.h>

using namespace std;

signed main() {
    string a,b; cin >> a >> b;
    int c = 0, d = b.size()-1;
    for (int i = a.size()-1; i >= 0; i--)
        if (a[i] == '0') c++;
        else break;
    if (c >= d) {
        for (int i = 0; i < a.size()-d; i++)
            cout << a[i];
    } else if (d <= a.size()) {
        d -= c;
        int i;
        bool flag = false;
        for (i = 0; i < a.size()-c-d; i++) {
            cout << a[i];
            flag = true;
        }
        if (!flag) cout << 0;
        cout << ".";
        for (int j = i; j < a.size()-c; j++) cout << a[j];
    } else {
        cout << "0.";
        d -= (c+a.size());
        for (int i = 0; i < d; i++) cout << 0;
        for (int i = 0; i < a.size()-c; i++) cout << a[i];
    }
    return 0;
}
