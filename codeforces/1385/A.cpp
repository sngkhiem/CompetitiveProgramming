#include <bits/stdc++.h>

using namespace std;

signed main() {
    int t; cin >> t;
    while (t--) {
        int a,b,c;
        cin >> a >> b >> c;
        int tmp = max(a,max(b,c));
        if (tmp == a) a = 0;
        else if (tmp == b) b = 0;
        else if (tmp == c) c = 0;
        if (a != tmp && b != tmp && c != tmp) { cout << "NO" << endl; continue;}
        cout << "YES\n";
        if (a == tmp && b != 0) cout << 1 << " " << tmp << " " << b << endl;
        else if (a == tmp && c != 0) cout << 1 << " " << tmp << " " << c << endl;
        else if (b == tmp && a != 0) cout << 1 << " " << tmp << " " << a << endl;
        else if (b == tmp && c != 0) cout << 1 << " " << tmp << " " << c << endl;
        else if (c == tmp && a != 0) cout << 1 << " " << tmp << " " << a << endl;
        else if (c == tmp && b != 0) cout << 1 << " " << tmp << " " << b << endl;
    }
	return 0;
}
