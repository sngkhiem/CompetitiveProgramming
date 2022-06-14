/*
    Author: Tran Hoang Khiem (sngkhiem)
    School: Nguyen Thi Minh Khai High School
*/
#include <bits/stdc++.h>

using namespace std;

#define ll long long

const int maxn = 1e7+5;

int cnt[maxn];
int curMEX;

signed main() {
    int q,x; cin >> q >> x;
    while (q--) {
        int cur; cin >> cur;
        cnt[cur%x]++;
        while (cnt[curMEX%x] != 0) cnt[curMEX%x]--,curMEX++;
        cout << curMEX << "\n";
    }
    return 0;
}
