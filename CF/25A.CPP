#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n; cin >> n;
    bool flag = false;
    int cntOdd = 0, cntEven = 0;
    int posEven = -1, posOdd;
    for (int i = 0; i < n; i++) {
        int tmp; cin >> tmp;
        if (tmp % 2 == 1) cntOdd++, posOdd = i;
        else cntEven++,posEven = i;
    }
    cout << (cntOdd == 1 ? posOdd+1 : posEven+1);
    return 0;
}
