#include <bits/stdc++.h>

using namespace std;

//#define int long long

map<char,int> score;

signed main() {
    string s; cin >> s;
    for (int i = 0; i < s.size()-1; i+=2)
        score[s[i]] += int(s[i+1]-'0');
    if (score['A'] > score['B']) cout << "A";
    else cout << "B";
    return 0;
}
