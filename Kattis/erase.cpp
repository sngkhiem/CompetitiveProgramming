#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n; cin >> n;
    if (n % 2 == 0) {
        string s1,s2;
        cin >> s1 >> s2;
        if (s1 == s2) cout << "Deletion succeeded";
        else cout << "Deletion failed";
    } else {
        string s1,s2;
        cin >> s1 >> s2;
        for (int i = 0; i < s1.size(); i++)
            if (s1[i] == s2[i]) {
                cout << "Deletion failed";
                return 0;
            }
        cout << "Deletion succeeded";
    }
    return 0;
}
