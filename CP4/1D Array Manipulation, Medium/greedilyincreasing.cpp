#include <bits/stdc++.h>

using namespace std;

vector<int> gis;

signed main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int numb; cin >> numb;
        if (i == 0) gis.push_back(numb);
        else if (numb > gis[gis.size()-1]) gis.push_back(numb);
    }
    cout << gis.size() << "\n";
    for (auto x: gis) cout << x << " ";
    return 0;
}
