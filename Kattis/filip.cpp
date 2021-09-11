#include <bits/stdc++.h>

using namespace std;

signed main() {
    int a,b; cin >> a >> b;
    int newA = 0, newB = 0;
    while (a != 0) {
        int tmp = a%10;
        a /= 10;
        newA += tmp;
        if (a != 0) newA *= 10;
    }

    while (b != 0) {
        int tmp = b%10;
        b /= 10;
        newB += tmp;
        if (b != 0) newB *= 10;
    }
    cout << (newA > newB ? newA : newB);
    return 0;
}
