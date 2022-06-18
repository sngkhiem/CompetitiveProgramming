#include <bits/stdc++.h>

using namespace std;

signed main() {
    int n; cin >> n;
    string ans = "Deletion succeeded";
    int flag = (n % 2 == 1 ? 1 : 0);
    string s1,s2; cin >> s1 >> s2;
    for (int i = 0; i < s1.size(); i++)
        if ((!flag && s1[i] != s2[i]) || (flag && s1[i] == s2[i])) ans = "Deletion failed";
    cout << ans;
    return 0;
}
