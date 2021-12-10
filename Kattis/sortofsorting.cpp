#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<string,string> a, pair<string,string> b) {
    return a.first < b.first;
}

signed main() {
    int n;
    while (cin >> n) {
        if (n == 0) break;
        pair<string,string> ls[n];
        memset(ls,0,sizeof ls);
        for (int i = 0; i < n; i ++) {
            string tmp; cin >> tmp;
            string tmp2;
            tmp2.push_back(tmp[0]); tmp2.push_back(tmp[1]);
            ls[i].first = tmp2; ls[i].second = tmp;
        }
        stable_sort(ls,ls+n,cmp);
        for (int i = 0; i < n; i++) cout << ls[i].second << endl;
        cout << endl;
    }

}
