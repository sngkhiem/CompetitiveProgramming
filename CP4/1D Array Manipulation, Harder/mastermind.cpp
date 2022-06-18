#include <bits/stdc++.h>

using namespace std;

int freq1[105],freq2[105];

signed main() {
    int n; string s1,s2;
    cin >> n >> s1 >> s2;
    int r = 0, s = 0;
    for (int i = 0; i < s1.size(); i++)
        if (s1[i] == s2[i]) r++;
        else freq1[s1[i]-'A']++,freq2[s2[i]-'A']++;
    for (int i = 0; i < 100; i++)
        if (freq1[i] && freq2[i]) s += min(freq1[i],freq2[i]);
    cout << r << " " << s;
    return 0;
}
