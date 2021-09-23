#include <bits/stdc++.h>

using namespace std;

signed main() {
    int a,b,c; cin >> a >> b >> c;

    int cost = 3*a+2*b+c;

    if (cost >= 8) cout << "Province or ";
    else if (cost >= 5) cout << "Duchy or ";
    else if (cost >= 2) cout << "Estate or ";

    if (cost >= 6) cout << "Gold";
    else if (cost >= 3) cout << "Silver";
    else cout << "Copper";
    return 0;
}
