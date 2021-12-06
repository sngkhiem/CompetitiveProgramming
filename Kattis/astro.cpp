#include <bits/stdc++.h>

using namespace std;

const int MAXTIME = 1e7+5;

bool mark[MAXTIME];

signed main() {
    string days[] = { "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday" };
    int h1,m1,h2,m2,h3,m3,h4,m4; char tmp;
    cin >> h1 >> tmp >> m1;
    cin >> h2 >> tmp >> m2;
    cin >> h3 >> tmp >> m3;
    cin >> h4 >> tmp >> m4;

    int fi = h1 * 60 + m1;
    int se = h2 * 60 + m2;
    int incFI = h3 * 60 + m3;
    int incSE = h4 * 60 + m4;

    for (int i = fi; i < MAXTIME; i += incFI) mark[i] = true;
    for (int x = se; se < MAXTIME; x += incSE) {
        if (mark[x]) {
            string tmp = "", tmp2 = ":";
            cout << days[x / 24 / 60 % 7] << "\n";
            if (x / 60 % 24 < 10) tmp = "0";
            if (x % 60 < 10) tmp2 = ":0";
            cout << tmp << x / 60 % 24 << tmp2 << x % 60;
            return 0;
        }
    }
    cout << "Never";
    return 0;
}
