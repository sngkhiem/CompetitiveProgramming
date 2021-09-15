#include <bits/stdc++.h>

using namespace std;

signed main() {
    string s;
    int cur = 0;
    while(getline(cin,s)) {
    //getline(cin,s);
        for (int i = 0; i < s.size(); i++) {
            if (cur % 2 == 0 && s[i] == '"') {
                cur++; s.replace(i,1,"`");
                s.insert(i+1,"`");
            } else if (s[i] == '"') {
                cur++; s.replace(i,1,"'");
                s.insert(i+1,"'");
            }
        }
        cout << s << "\n";
    }
    return 0;
}
