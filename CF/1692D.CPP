/*
    Author: Tran Hoang Khiem
    School: Nguyen Thi Minh Khai High School
*/
#include <bits/stdc++.h>

using namespace std;

#define ll long long

signed main() {
    int t; cin >> t;
    while (t--) {
        map<string,map<string,bool>> mark;
        char tmp;
        int initH, initM, x, incH, incM;
        cin >> initH >> tmp >> initM >> x;
        int curH = initH, curM = initM;
        incH = x / 60, incM = x - x/60*60;
        int cnt = 0; int i = 0;
        do {
            if (curH + incH <= 23) curH += incH;
            else curH = incH - (23-curH) - 1;
            if (curM + incM < 60) curM += incM;
            else {
                curM = incM - (60 - curM);
                if (curH + 1 <= 23) curH += 1;
                else curH = 0;
            }
            string tmp2 = to_string(curH);
            string tmp = to_string(curM);
            if (tmp.size() == 1) tmp = '0' + tmp;
            if (tmp2.size() == 1) tmp2 = '0' + tmp2;
            reverse(tmp.begin(),tmp.end());
            if (tmp == tmp2 && !mark[tmp][tmp2]) cnt++, mark[tmp][tmp2] = true;
            //cout << tmp2 << " " << tmp << "\n";
        } while (curH != initH || curM != initM);
        cout << cnt << "\n";
    }
    return 0;
}

