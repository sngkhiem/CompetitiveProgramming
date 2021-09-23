#include <bits/stdc++.h>

using namespace std;

map<string,int> table;

signed main() {
    string s;
    while (cin >> s) {
        table[s]++;
        if (table[s] >= 2) {
            cout << "no"; return 0;
        }
    }
    cout << "yes";
    return 0;
}
