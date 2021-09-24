#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        if (s == "P=NP") cout << "skipped\n";
        else {
            int flag = 0;
            string fi = "", se = "";
            for (int i = 0; i < s.size(); i++) {
                if (s[i] == '+') flag = 1;
                else if (flag == 0) fi += s[i];
                else if (flag == 1) se += s[i];
            }
            cout << stoi(fi,0,10) + stoi(se,0,10) << "\n";
        }

    }
    return 0;
}
