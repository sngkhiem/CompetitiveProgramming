#include <bits/stdc++.h>

using namespace std;

signed main() {
    bool flag = true;
    int cnt = 0;
    string s; cin >> s;
    //cout << cnt << "\n";
    for (int i = 0; i < s.size(); i++) 
        if (s[i] < 'A' || s[i] > 'Z') {
            flag = false; cnt++;
        }
    if (flag) {
        char tmp = s[0] + 32;
        cout << tmp;
        for (int i = 1; i < s.size(); i++) {
            tmp = s[i] + 32;
            cout << tmp;
        }
    } else if (cnt == 1 && s[0] >= 'a' && s[0] <= 'z') {
        char tmp = s[0] - 32;
        cout << tmp;
        for (int i = 1; i < s.size(); i++) {
            tmp = s[i] + 32;
            cout << tmp;
        }
    } else cout << s;
    return 0;   
}
