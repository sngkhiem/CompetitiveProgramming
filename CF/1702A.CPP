/*
    Author: Tran Hoang Khiem
    School: Nguyen Thi Minh Khai High School
*/
#include <bits/stdc++.h>

using namespace std;

#define all(a) a.begin(),a.end()
#define ll long long

signed main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s = to_string(n);
        if (n==1) cout << "0\n";
        else cout << n - (int)pow(10,s.size()-1) << "\n";
    }
    return 0;
}

