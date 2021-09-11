#include <bits/stdc++.h>

using namespace std;

#define int long long

int f[18][4][7][3];

signed main() {
    int t; cin >> t;
    while (t--) {
        memset(f,0,sizeof f);
        string n; cin >> n;

        // Init base case
        int base = n[0] - '0';
        int r4,r7,status;
        for (int i = 1; i <= 9; i++) {
            //Base remainder
            r4 = 0; r7 = 0;
            if (i == 4) r4 = 1;
            else if (i == 7) r7 = 1;

            //Base status
            if (i < base) status = 0;
            else if (i == base) status = 1;
            else status = 2;

            //Base case
            f[0][r4][r7][status]++;
        }

        //DP Progress
        int newR4,newR7,newStatus;
        for (int i = 0; i < n.size()-1; i++) {
                for (int r4 = 0; r4 <= 3; r4++) {
                    for (int r7 = 0; r7 <= 6; r7++) {
                        for (int status = 0; status <= 2; status++) {
                            if (f[i][r4][r7][status] > 0) {
                                for (int digit = 0; digit <= 9; digit++) {
                                // new remainder
                                newR4 = (r4 + (digit == 4 ? 1 : 0)) % 4;
                                newR7 = (r7 + (digit == 7 ? 1 : 0)) % 7;

                                //new status
                                if (status == 0) newStatus = 0;
                                else if (status == 2) newStatus = 2;
                                else if (status == 1) {
                                    if (digit < ((int) n[i+1] - '0')) newStatus = 0;
                                    else if (digit == ((int) n[i+1] - '0')) newStatus = 1;
                                    else newStatus = 2;
                                }

                                // Update next case
                                f[i+1][newR4][newR7][newStatus] += f[i][r4][r7][status];
                            }
                        }
                    }
                }
            }
        }


        // Answer
        int ans = 0;
        for (int length = 0; length < n.size(); length++)
            if (length < n.size()-1) {
                for (int status = 0; status <= 2; status++)
                    ans += f[length][0][0][status];
            }
            else {
                for (int status = 0; status <= 1; status++)
                    ans += f[length][0][0][status];
            }
        cout << ans << "\n";
    }
    return 0;
}
