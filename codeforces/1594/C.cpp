#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        int n; char c;
        cin >> n >> c;
        bool check = true;
        string s = "";
        for (int i = 1; i <= n; i++) {
            char tmp; cin >> tmp;
            if (tmp != c && check == true)
                check = false;
            s += tmp;
        }

        int mark = -1;
        if (check) cout << "0\n";
        else {
            for (int i = s.size()-1; i >= 0; i--) {
                if (s[i] == c) {
                    mark = i + 1;
                    break;
                }
            }

            if (mark > n/2) cout << "1\n" << mark << "\n";
            else cout << "2\n" << n << " " << n-1 << "\n";
        }
    }
    return 0;
}
