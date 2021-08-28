#include <bits/stdc++.h>

using namespace std;

const int OO = 1e9;
const int N = 1e3+5;

int n;
string seat[N];

signed main() {
    cin >> n;

    for (int i = 1; i <= n; i++) cin >> seat[i];

    int flag = 0;
    for (int i = 1; i <= n; i++) {
        if (flag == 1) break;
        if (seat[i][0] == 'O' && seat[i][1] == 'O') {
            flag = 1;
            seat[i][0] = '+'; seat[i][1] = '+';
        }
        else if (seat[i][3] == 'O' && seat[i][4] == 'O') {
            flag = 1;
            seat[i][3] = '+'; seat[i][4] = '+';
        }
    }

    if (flag == 0) cout << "NO";
    else {
        cout << "YES\n";
        for (int i = 1; i <= n; i++) cout << seat[i] << "\n";
    }
    return 0;
}
