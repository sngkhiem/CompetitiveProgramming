#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n; cin >> n;
    string type; cin >> type;
    vector<int> init, tmp; init.push_back(-1); tmp.push_back(-1);
    for (int i = 1; i <= n; i++) init.push_back(i), tmp.push_back(i);
    //for (int i = 1; i <= n; i++) cout << init[i] << " "; cout << "\n";
    int cnt = 0;
    while (true) {
        cnt++;
        vector<int> left, right, cur;
        left.push_back(-1); right.push_back(-1); cur.push_back(-1);
        if (n % 2 == 1) {
            if (type == "out") {
                for (int i = 1; i <= n/2+1; i++) left.push_back(tmp[i]);
                for (int i = n/2+2; i <= n; i++) right.push_back(tmp[i]);

                int idx1 = 1, idx2 = 1, state = 1;
                while (idx1 <= n/2+1 || idx2 <= n-n/2-1) {
                    if (state) cur.push_back(left[idx1++]), state = 0;
                    else cur.push_back(right[idx2++]), state = 1;
                }
            } else {
                for (int i = 1; i <= n/2; i++) left.push_back(tmp[i]);
                for (int i = n/2+1; i <= n; i++) right.push_back(tmp[i]);

                int idx1 = 1, idx2 = 1, state = 1;
                while (idx1 <= n/2 || idx2 <= n-n/2+1) {
                    if (state) cur.push_back(right[idx2++]), state = 0;
                    else cur.push_back(left[idx1++]), state = 1;
                }
            }
        } else {
            for (int i = 1; i <= n/2; i++) left.push_back(tmp[i]);
            for (int i = n/2+1; i <= n; i++) right.push_back(tmp[i]);
            if (type == "out") {
                int idx1 = 1, idx2 = 1, state = 1;
                while (idx1 <= n/2 || idx2 <= n-n/2) {
                    if (state) cur.push_back(left[idx1++]), state = 0;
                    else cur.push_back(right[idx2++]), state = 1;
                }
            } else {
                int idx1 = 1, idx2 = 1, state = 1;
                while (idx1 <= n/2 || idx2 <= n-n/2-1) {
                    if (state) cur.push_back(right[idx2++]), state = 0;
                    else cur.push_back(left[idx1++]), state = 1;
                }
            }
        }
        //for (int i = 1; i <= n; i++) cout << cur[i] << " "; cout << "\n";
        //if (cnt == 3) break;
        bool flag = true;
        for (int i = 1; i <= n; i++)
            if (cur[i] != init[i]) flag = false;
        if (flag) break;
        for (int i = 1; i <= n; i++) tmp[i] = cur[i];
    }
    cout << cnt;
    return 0;
}
