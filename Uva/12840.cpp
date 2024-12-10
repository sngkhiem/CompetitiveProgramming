#include <bits/stdc++.h>

using namespace std;

signed main() {

    int t; cin >> t;
    int tc = 0;
    while (t--) {
        tc++;
        int n, s; 
        cin >> n >> s;
        vector<int> score(n), b(n), c(n);
        for (int i = 0; i < n; i++)
            cin >> score[i];
        reverse(score.begin(), score.end());
        int ans = 1e9;

        function<void(int , int , int)> backtrack = [&](int i , int curSum , int cnt) {
            int curScoreSum = 0;
            for (int j = 0; j <= 300; j++) {
                curScoreSum = j * score[i];
                if (curSum + curScoreSum > s || cnt+j > ans) 
                    return;
                b[i] = j;
                if (curSum + curScoreSum == s) {
                    ans = cnt + j;
                    c = b;
                    b[i] = 0;
                    return;
                }
                if (i != n-1) backtrack(i+1, curSum+curScoreSum, cnt+j);
                b[i] = 0;
            }
        };

        backtrack(0, 0, 0);
        cout << "Case " << tc << ": ";
        if (ans != 1e9) {
            cout << "[" << ans << "] ";
            int ic = 0;
            for (int i = 0; i < n; i++) {
                if (c[i]) {
                    for (int j = 0; j < c[i]; j++) {
                        ic++;
                        cout << score[i];
                        if (ic != ans)
                            cout << " ";
                    }
                }
            }
            cout << "\n";
        }
        else 
            cout << "impossible\n";
    }
    return 0;
}