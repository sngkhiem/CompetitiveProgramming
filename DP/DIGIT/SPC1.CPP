#include <bits/stdc++.h>

using namespace std;

#define int long long

int f[16][16][3];
long long a,b;

int sumOfDigits(string a) {
    int base = a[0] - '0'; int ans = 0;
    for (int d = 1; d <= 9; d++) {
        memset(f,0,sizeof f);

        for (int i = 1; i <= 9; i++)
            if (i == base) f[1][i == d][1]++;
            else if(i < base) f[1][i == d][0]++;
            else if (i > base) f[1][i == d][2]++;

        for (int i = 1; i < a.size(); i++) {
            for (int cnt = 0; cnt <= a.size(); cnt++) {
                for (int status = 0; status <= 2; status++) {
                    if (f[i][cnt][status] > 0) {
                        int newCnt, newStatus;
                        for (int d1 = 0; d1 <= 9; d1++) {
                            newCnt = cnt + (d1 == d ? 1 : 0);
                            if (status == 0 || status == 2) newStatus = status;
                            else {
                                if (d1 < (int) a[i] - '0') newStatus = 0;
                                else if (d1 == (int) a[i] - '0') newStatus = 1;
                                else newStatus = 2;
                            }
                            f[i+1][newCnt][newStatus] += f[i][cnt][status];
                        }
                    }
                }
            }
        }

        for (int i = 1; i <= a.size(); i++) {
            if (i <= a.size() - 1) {
                for (int status = 0; status <= 2; status++) {
                    for (int cnt = 1; cnt <= a.size(); cnt++)
                        if (f[i][cnt][status] > 0) ans += d*cnt*f[i][cnt][status];
                }
            } else {
                for (int status = 0; status < 2; status++) {
                    for (int cnt = 1; cnt <= a.size(); cnt++)
                        if (f[i][cnt][status] > 0) ans += d*cnt*f[i][cnt][status];
                }
            }
        }
    }
    return ans;
}

signed main() {
    int testCase; cin >> testCase;
    while (testCase--) {
        cin >> a >> b; a--;
        string newA = to_string(a), newB = to_string(b);
        cout << sumOfDigits(newB) - sumOfDigits(newA) << "\n";
    }
    return 0;
}
