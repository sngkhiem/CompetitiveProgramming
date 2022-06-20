#include <bits/stdc++.h>

using namespace std;

const int MAXTIME = 1e7+5;
const string days[] = {"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};

char tmp;
int mark[MAXTIME];


signed main() {

    int h1,m1,h2,m2,incH1,incM1,incH2,incM2;
    cin >> h1 >> tmp >> m1 >> h2 >> tmp >> m2 >> incH1 >> tmp >> incM1 >> incH2 >> tmp >> incM2;
    h1 = h1*60+m1; h2 = h2*60+m2;
    incH1 = incH1*60+incM1; incH2 = incH2*60+incM2;
    for (int i = h1; i < MAXTIME; i += incH1) mark[i] = true;
    for (int i = h2; i < MAXTIME; i += incH2)
        if (mark[i]) {
            string tmp1 = "", tmp2 = ":";
            cout << days[i / 24 / 60 % 7] << "\n";
            if (i / 60 % 24 < 10) tmp1 = "0";
            if (i % 60 < 10) tmp2 = ":0";
            cout << tmp1 << i / 60 % 24 << tmp2 << i % 60;
            return 0;

        }
    cout << "Never";
    return 0;
}
