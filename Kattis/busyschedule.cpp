#include <bits/stdc++.h>

using namespace std;

struct time1 {
    int h;
    int m;
    char c;
};

bool cmp(time1 a, time1 b) {
    if (a.c < b.c) return true;
    else if (a.c > b.c) return false;

    int tmp1 = a.h*100+a.m;
    int tmp2 = b.h*100+b.m;
    return tmp1 < tmp2;
}

signed main() {
    int n;
    while (cin >> n && n != 0) {
        vector<time1> t;
        for (int i = 0; i < n; i++) {
            char tmp;
            string tmp2;
            time1 cur;
            cin >> cur.h;
            cin >> tmp;
            cin >> cur.m;
            cin >> cur.c;
            cin >> tmp2;
            if (cur.h == 12) cur.h -= 12;
            t.push_back(cur);
        }
        sort(t.begin(),t.end(),cmp);
        for (auto x: t) {
            if (x.h == 0) cout << 12;
            else cout << x.h;
            cout << ":";
            if (x.m<10) cout << "0";
            cout << x.m << " ";
            cout << x.c;
            cout << ".m.\n";
        }
        cout << "\n";
    }
    return 0;
}
