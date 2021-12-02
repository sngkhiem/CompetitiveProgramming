#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n;
    while (cin >> n) {
        if (n == 0) break;
        int mx = -1; string ans;
        while (n--) {
            string s; cin >> s;

            int a = 0,e = 0,i = 0,o = 0,u = 0,y = 0;
            for (int i = 0; i < s.size()-1; i++)
                if (s[i] == 'a' && s[i+1] == 'a') a++;
                else if (s[i] == 'e' && s[i+1] == 'e') e++;
                else if (s[i] == 'i' && s[i+1] == 'i') i++;
                else if (s[i] == 'o' && s[i+1] == 'o') o++;
                else if (s[i] == 'u' && s[i+1] == 'u') u++;
                else if (s[i] == 'y' && s[i+1] == 'y') y++;

            if (mx < a+e+i+o+u+y) {
                mx = a+e+i+o+u+y;
                ans = s;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
