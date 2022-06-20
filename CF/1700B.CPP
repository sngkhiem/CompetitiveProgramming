/*
    Author: Tran Hoang Khiem
    School: Nguyen Thi Minh Khai High School
*/
#include <bits/stdc++.h>

using namespace std;

#define all(a) a.begin(),a.end()
#define ll long long

string diff(string a, string b) {
    int d = 0, carry  = 0;
    string res;
    for (int i = a.size() - 1; i >= 0; --i) {
        d = (a[i] - '0') - (b[i] - '0') - carry;

        if (d < 0) {
            d += 10;
            carry = 1;
        } else carry = 0;

        res = (char)(d + '0') + res;
    }
    while (res.size() > 1 && res.front() == '0')
        res.erase(res.begin());
    return res;
}

signed main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        string s; cin >> s;
        string s2;
        if (s[0] == '9') {
            for (int i = 0; i <= s.size(); i++) s2 += '1';
        } else {
            for (int i = 0; i < s.size(); i++) s2 += '9';
        }
        while (s.size() < s2.size()) s = '0' + s;
        cout << diff(s2,s) << "\n";
    }
    return 0;
}
