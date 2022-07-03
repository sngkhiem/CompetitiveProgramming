#include <bits/stdc++.h>

using namespace std;

bool cmp1(char c1, char c2){
    return (tolower(c1) > tolower(c2));
}

bool cmp2(string s1, string s2) {
    return lexicographical_compare(s1.begin(),s1.end(),s2.begin(),s2.end(),cmp1);
}

signed main() {
    int r,c;
    while (cin >> r >> c) {
        if (r == 0 && c == 0) break;
        char g[r][c];
        vector<string> stored;
        for (int i = 0; i < r; i++) for (int j = 0; j < c; j++) cin >> g[i][j];
        for (int i = 0; i < c; i++) {
            string s;
            for (int j = 0; j < r; j++) s += g[j][i];
            stored.push_back(s);
        }
        sort(stored.rbegin(),stored.rend(),cmp2);
        for (int i = 0; i < stored[0].size(); i++) {
            for (int j = 0; j < stored.size(); j++)
                cout << stored[j][i];
            cout << "\n";
        }
        cout << "\n";
    }
    return 0;
}
