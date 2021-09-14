#include <bits/stdc++.h>

using namespace std;

map<char, int> code;

signed main() {
    //freopen("in.txt","r",stdin); freopen("out.txt","w",stdout);
    string s;
    code['B'] = code['P'] = code['F'] = code['V'] = 1;
    code['C'] = code['S'] = code['K'] = code['G'] = code['J'] = code['Q'] = code['X'] = code['Z'] = 2;
    code['D'] = code['T'] = 3;
    code['L'] = 4;
    code['M'] = code['N'] = 5;
    code['R'] = 6;
    cout << "         NAME                     SOUNDEX CODE\n";
    while (cin >> s) {
        string ans(1,s[0]);
        int cnt = 0; int flag = 0;
        for (int i = 1; i < s.size(); i++)
            if (code[s[i]] != 0 && code[s[i-1]] != code[s[i]]) {
                string tmp = to_string(code[s[i]]);
                ans += tmp; cnt++;
                if (cnt == 3) {
                    flag = 1;
                    break;
                }
            }
        if (flag == 0) {
            for (int i = cnt; i < 3; i++) ans += "0";
        }
        cout << "         " << s;
        int space = 25-s.size();
        for (int i = 1; i <= space; i++) cout << " ";
        cout << ans << "\n";
    }
    cout << "                   END OF OUTPUT\n";
    return 0;
}
