/*
    Author: Tran Hoang Khiem
    School: Nguyen Thi Minh Khai High School
*/
#include <bits/stdc++.h>

using namespace std;

#define ll long long

char g[8][8];

signed main() {
    int t; cin >> t;
    while (t--) {
        for (int i = 0; i < 8; i++)
            for (int j = 0; j < 8; j++)
                cin >> g[i][j];
        bool flag = false;
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                if (i > 0 && i < 7 && j > 0 && j < 7 && i+1 <= 7 && j+1 <= 7 && j-1 >= 0 && i-1 >= 0 && j+1 <= 7 && g[i][j] == '#' && g[i+1][j+1] == '#' && g[i+1][j-1] == '#' && g[i-1][j+1] == '#' && g[i-1][j-1] == '#') {
                        cout << i+1 << " " << j+1 << "\n";
                        flag = true;
                    }
                if (flag) break;
            }
            if (flag) break;
        }
    }
    return 0;
}

