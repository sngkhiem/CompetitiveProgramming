#include <bits/stdc++.h>

using namespace std;

vector<string> v;

signed main() {
    string s;
    while(getline(cin,s)) {
        if (s == "") {
            sort(v.begin(),v.end());
            int maxSz = -1;
            for (auto x: v) maxSz = max(maxSz,(int)x.size());
            for (auto x: v) {
                for (int i = 0; i < maxSz - (int)x.size(); i++) cout << " ";
                reverse(x.begin(),x.end());
                cout << x << "\n";
            }
            cout << "\n";
            v.clear();
            continue;
        }
        reverse(s.begin(),s.end());
        v.push_back(s);
    }
    sort(v.begin(),v.end());
    int maxSz = -1;
    for (auto x: v) maxSz = max(maxSz,(int)x.size());
    for (auto x: v) {
        for (int i = 0; i < maxSz - (int)x.size(); i++) cout << " ";
        reverse(x.begin(),x.end());
        cout << x << "\n";
    }
    return 0;
}
