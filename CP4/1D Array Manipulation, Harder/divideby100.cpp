/*
  3 cases:
    - s1 % s2 == 0
    - s1 / s2 < 1
    - else
*/

#include <bits/stdc++.h>

using namespace std;

string s1,s2;

signed main() {
    cin >> s1 >> s2;
    int pivot = s1.size()-1, cntZeroFirst = 0, cntZeroSecond = 0;
    for (pivot = s1.size()-1; pivot >= 0; pivot--)
        if (s1[pivot] == '0') cntZeroFirst++;
        else break;
    cntZeroSecond = s2.size()-1-cntZeroFirst;
    if (cntZeroSecond <= 0) {
        for (int i = 0; i < s1.size()-s2.size()+1; i++) cout << s1[i];
    } else if (cntZeroSecond >= s1.size()-cntZeroFirst) {
        cout << "0.";
        cntZeroSecond -= (pivot+1);
        for (int i = 0; i < cntZeroSecond; i++) cout << "0";
        int flag = 0;
        for (int i = 0; i <= pivot; i++) cout << s1[i];
    } else {
        for (int i = 0; i < s1.size()-cntZeroFirst; i++) {
            if (i == s1.size()-cntZeroFirst-cntZeroSecond) cout << ".";
            cout << s1[i];
        }
    }

    return 0;
}
