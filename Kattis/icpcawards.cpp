#include <bits/stdc++.h>

using namespace std;

map<string,int> mark;

signed main() {
    int n,cnt=0; cin >> n;
    while (n--) {
        string uni,teamName;
        cin >> uni;
        if (mark[uni] == 0 && cnt < 12) {
            cin >> teamName; cout << uni << " " << teamName << "\n";
            mark[uni] = 1; cnt++;
        } else if (cnt == 12) return 0;
        else cin >> teamName;
    }
    return 0;
}
