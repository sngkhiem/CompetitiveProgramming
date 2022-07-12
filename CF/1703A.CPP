/*
    Author: Tran Hoang Khiem
    School: Nguyen Thi Minh Khai High School
*/
#include <bits/stdc++.h>

using namespace std;

#define all(a) a.begin(),a.end()
#define ll long long

int t,n;


signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin >> t;
    while (t--) {
        string s; cin >> s;
        for (int i = 0; i < s.size(); i++)
            if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
        if (s == "YES") cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

