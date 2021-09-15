#include <bits/stdc++.h>

using namespace std;

const int K = 82;
const int MOD = 1e9+9;

int f[11][K][K][K][3];

signed main() {
    int t; cin >> t;
    while (t--) {
        memset(f,0,sizeof f);
        string a; int k; cin >> a >> k;
        if (k > 81) cout << 0 << "\n";
        else {
            int base = a[0] - '0';
            for (int i = 1; i <= 9; i++) {
                int status;
                if (i < base) status = 0;
                else if (i == base) status = 1;
                else status = 2;
                f[1][i % k][i % k][i % k][status]++;
            }

            for (int i = 1; i < a.size(); i++) {
                for (int r1 = 0; r1 < k; r1++) {
                    for (int r2 = 0; r2 < k; r2++) {
                        for (int r3 = 0; r3 < k; r3++) {
                            for (int status = 0; status <= 2; status++) {
                                if (f[i][r1][r2][r3][status] > 0) {
                                    int newR1,newR2,newR3,newStatus;
                                    for (int d = 0; d <= 9; d++) {
                                        newR1 = (r1*10+d) % k;
                                        newR2 = (r2+d) % k;
                                        newR3 = r3*d % k;
                                        if (status == 0 || status == 2) newStatus = status;
                                        else {
                                            if (d < a[i] - '0') newStatus = 0;
                                            else if (d == a[i] - '0') newStatus = 1;
                                            else newStatus = 2;
                                        }
                                        f[i+1][newR1][newR2][newR3][newStatus] = (f[i+1][newR1][newR2][newR3][newStatus] % MOD + f[i][r1][r2][r3][status] % MOD) % MOD;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            int ans = 0;
            for (int i = 1; i <= a.size(); i++) {
                if (i <= a.size()-1) {
                    for (int status = 0; status <= 2; status++) ans = (ans % MOD + f[i][0][0][0][status] % MOD) % MOD;
                } else {
                    for (int status = 0; status < 2; status++) ans = (ans % MOD +  f[i][0][0][0][status] % MOD) % MOD;
                }
            }
            cout << ans << "\n";
        }
    }
    return 0;
}
