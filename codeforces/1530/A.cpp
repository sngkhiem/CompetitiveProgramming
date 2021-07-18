#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        cout << *max_element(s.begin(),s.end()) << endl;
    }
    return 0;
}