#include <bits/stdc++.h>

using namespace std;

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    cin.ignore();
    while (n--) {
        map<char,int> mark;
        for (auto i = 'a'; i <= 'z'; i++)
        mark[i] = 0;
        string s;
        getline(cin,s);
        for (int i = 0; i < s.size(); i++)
            if (s[i] >= 'A' && s[i] <= 'Z') mark[s[i] + 32] = 1;
            else if (s[i] >= 'a' && s[i] <= 'z') mark[s[i]] = 1;
        string missing = "";
        for (auto x: mark)
            if (x.second == 0) missing.push_back(x.first);
        if (missing == "") cout << "pangram\n";
        else cout << "missing " << missing << "\n";
    }
    return 0;
}
