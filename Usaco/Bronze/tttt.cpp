#include <bits/stdc++.h>

using namespace std;

char a[3][3];
map<char,int> check,check2;
map<string,int> check3;
int team,nonTeam;
signed main() {
    //freopen("tttt.in","r",stdin); freopen("tttt.out","w",stdout);
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> a[i][j];

    // row 1
    string b(1,a[0][0]), c(1,a[0][1]), d(1,a[0][2]);
    string s = b + c + d; sort(s.begin(),s.end());
    check[a[0][0]]++; check[a[0][1]]++; check[a[0][2]]++;
    if (check[a[0][0]] == 3 && check2[a[0][0]] == 0) {
      nonTeam++; check2[a[0][0]]++;
    }
    else if ((check[a[0][0]] == 2 || check[a[0][1]] == 2 || check[a[0][2]] == 2) && check3[s] == 0) {
        team++; check3[s]++; cout << s << "\n";
    }
    check.clear();

    // row 2
    string b1(1,a[1][0]), c1(1,a[1][1]), d1(1,a[1][2]);
    s = b1 + c1 + d1; sort(s.begin(),s.end());
    check[a[1][0]]++; check[a[1][1]]++; check[a[1][2]]++;
    if (check[a[1][0]] == 3 && check2[a[1][0]] == 0) {
        nonTeam++; check2[a[1][0]]++;
    }
    else if ((check[a[1][0]] == 2 || check[a[1][1]] == 2 || check[a[1][2]] == 2) && check3[s] == 0) {
        team++; check3[s]++; cout << s << "\n";
    }
    check.clear();

    // row 3
    string b2(1,a[2][0]), c2(1,a[2][1]), d2(1,a[2][2]);
    s = b2 + c2 + d2; sort(s.begin(),s.end());
    check[a[2][0]]++; check[a[2][1]]++; check[a[2][2]]++;
    if (check[a[2][0]] == 3 && check2[a[2][0]] == 0) {
        nonTeam++; check2[a[2][0]]++;
    }
    else if ((check[a[2][0]] == 2 || check[a[2][1]] == 2 || check[a[2][2]] == 2) && check3[s] == 0) {
        team++; check3[s]++; cout << s << "\n";
    }
    check.clear();

    // col 1
    string b3(1,a[0][0]), c3(1,a[1][0]), d3(1,a[2][0]);
    s = b3 + c3 + d3; sort(s.begin(),s.end());
    check[a[0][0]]++; check[a[1][0]]++; check[a[2][0]]++;
    if (check[a[0][0]] == 3 && check2[a[0][0]] == 0) {
        nonTeam++; check2[a[0][0]]++;
    }
    else if ((check[a[0][0]] == 2 || check[a[1][0]] == 2 || check[a[2][0]] == 2) && check3[s] == 0) {
        team++; check3[s]++; cout << s << "\n";
    }
    check.clear();

    // col 2
    string b4(1,a[0][1]), c4(1,a[1][1]), d4(1,a[2][1]);
    s = b4 + c4 + d4; sort(s.begin(),s.end());
    check[a[0][1]]++; check[a[1][1]]++; check[a[2][1]]++;
    if (check[a[0][1]] == 3 && check2[a[0][1]] == 0) {
        nonTeam++; check2[a[0][1]]++;
    }
    else if ((check[a[0][1]] == 2 || check[a[1][1]] == 2 || check[a[2][1]] == 2) && check3[s] == 0) {
            team++; check3[s]++; cout << s << "\n";
    }
    check.clear();

    // col 3
    string b5(1,a[0][2]), c5(1,a[1][2]), d5(1,a[2][2]);
    s = b5 + c5 + d5; sort(s.begin(),s.end());
    check[a[0][2]]++; check[a[1][2]]++; check[a[2][2]]++;
    if (check[a[0][2]] == 3 && check2[a[0][2]] == 0) {
        nonTeam++; check2[a[0][2]];
    }
    else if ((check[a[0][2]] == 2 || check[a[1][2]] == 2 || check[a[2][2]] == 2) && check3[s] == 0) {
        team++; check3[s]++; cout << s << "\n";
    }
    check.clear();

    // diag 1
    string b6(1,a[0][0]), c6(1,a[1][1]), d6(1,a[2][2]);
    s = b6 + c6 + d6; sort(s.begin(),s.end());
    check[a[0][0]]++; check[a[1][1]]++; check[a[2][2]]++;
    if (check[a[0][0]] == 3 && check2[a[0][0]] == 0) {
        nonTeam++; check2[a[0][0]]++;
    }
    else if ((check[a[0][0]] == 2 || check[a[1][1]] == 2 || check[a[2][2]] == 2) && check3[s] == 0) {
        team++; check3[s]++; cout << s << "\n";
    }
    check.clear();

    // diag 2
    string b7(1,a[0][2]), c7(1,a[1][1]), d7(1,a[2][0]);
    s = b7 + c7 + d7; sort(s.begin(),s.end());
    check[a[0][2]]++; check[a[1][1]]++; check[a[2][0]]++;
    if (check[a[0][2]] == 3 && check2[a[0][2]] == 0) {
        nonTeam++; check2[a[0][2]]++;
    }
    else if ((check[a[0][2]] == 2 || check[a[1][1]] == 2 || check[a[2][0]] == 2) && check3[s] == 0) {
        team++; check3[s]++; cout << s << "\n";
    }
    check.clear();

    cout << nonTeam << "\n" << team;
    return 0;
}

