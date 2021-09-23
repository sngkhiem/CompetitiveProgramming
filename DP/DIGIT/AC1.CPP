#include <bits/stdc++.h>

using namespace std;

#define int long long

int f[21][2][2][2];

string toBin(int n) {
    string ans = "";
    while (n != 0) {
        string tmp = to_string(n%2);
        n /= 2;
        ans += tmp;
    }
    for (int i = ans.size(); i < 20; i++) ans += "0";
    reverse(ans.begin(),ans.end());
    return ans;
}

signed main() {
    int t; cin >> t;
    while (t--) {
        memset(f,0,sizeof f);
        int curA,curB,curC;
        cin >> curA >> curB >> curC;

        string a,b,c;
        a = toBin(curA); b = toBin(curB); c = toBin(curC);
        f[0][1][1][1] = 1;
        for (int i = 0; i <= 20; i++)
            for (int statusA = 0; statusA <= 1; statusA++)
                for (int statusB = 0; statusB <= 1; statusB++)
                    for (int statusC = 0; statusC <= 1; statusC++) {
                        if (f[i][statusA][statusB][statusC] == 0) continue;

                        for (int dX = 0; dX <= (statusA == 0 ? 1 : a[i]-'0'); dX++) {
                            for (int dY = 0; dY <= (statusB == 0 ? 1 : b[i]-'0'); dY++) {

                                int z = dX ^ dY;

                                if (statusC == 1 && z > c[i]-'0') continue;

                                int newStatusA = ((statusA == 1) && (dX == (a[i] - '0')));
                                int newStatusB = ((statusB == 1) && (dY == (b[i] - '0')));
                                int newStatusC = ((statusC == 1) && (z == (c[i] - '0')));

                                f[i+1][newStatusA][newStatusB][newStatusC] += f[i][statusA][statusB][statusC];
                            }
                        }
                    }

        int ans = 0;
        for (int statusA = 0; statusA <= 1; statusA++)
            for (int statusB = 0; statusB <= 1; statusB++)
                for (int statusC = 0; statusC <= 1; statusC++) {
                    ans += f[20][statusA][statusB][statusC];
                    //cout << f[20][statusA][statusB][statusC] << "\n";
                }
        cout << ans << "\n";
        /*for (int i = 0; i <= 17; i++) {
            for (int sa = 0; sa <= 1; sa++) {
                for (int sb = 0; sb <= 1; sb++) {
                    for (int sc = 0; sc <= 1; sc++)
                        cout << f[i][sa][sb][sc] << " ";
                    cout << "\n";
                }
                cout << "\n";
            }
            cout << "\n";
        }*/
    }
    return 0;
}
