#include <bits/stdc++.h>

using namespace std;

signed main() {
    int m, s; cin >> m >> s;

    //minimum number
    int tot1 = s, tot2 = s;
    string ansMin, ansMax;
    for (int i = 1; i <= m; i++) {
        for (int j = 0; j < 10; j++) {
            if (i == 1 && j == 0 && m != 1) continue;
            if ((tot1 - j) >= 0 && (m - i)*9 >= (tot1 - j)) {
                ansMin += (char)(j + '0');
                tot1 -= j;
                break;
            }
        }
    }
    if (tot1 != 0 || ansMin.size() != m) ansMin = "00";
    cout << (ansMin[0] == '0' && ansMin.size() != 1 ? "-1" : ansMin) << " ";
    //maximum number
    for (int i = 1; i <= m; i++) {
        for (int j = 9; j >= 0; j--) {
            if (i == 1 && j == 0 && m != 1) continue;
            if ((tot2 - j) >= 0 && (m - i)*9 >= (tot2 - j)) {
                ansMax += (char)(j + '0');
                tot2 -= j;
                break;
            }
        }
    }
    if (tot2 != 0 || ansMax.size() != m) ansMax = "00";
    cout << (ansMax[0] == '0' && ansMax.size() != 1 ? "-1" : ansMax);
    return 0;
}
