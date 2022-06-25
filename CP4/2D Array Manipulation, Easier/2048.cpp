#include <bits/stdc++.h>

using namespace std;

int g[5][5];
bool mark[5][5];

void print(int g[5][5]) {
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 4; j++)
            cout << g[i][j] << " ";
        cout << "\n";
    }
}

void left(int g[5][5]) {
    int cnt = 0;
    while (cnt <= 50) {
        for (int i = 1; i <= 4; i++) {
            for (int j = 2; j <= 4; j++) {
                if (g[i][j-1] == 0) g[i][j-1] = g[i][j], g[i][j] = 0, mark[i][j-1] = mark[i][j], mark[i][j] = false;
                else if (g[i][j-1] == g[i][j] && !mark[i][j] && !mark[i][j-1]) g[i][j-1] += g[i][j], g[i][j] = 0, mark[i][j] = true, mark[i][j-1] = true;
            }
        }
        cnt++;
    }
    print(g);
}

void right(int g[5][5]) {
    int cnt = 0;
    while (cnt <= 50) {
        for (int i = 1; i <= 4; i++) {
            for (int j = 3; j >= 1; j--) {
                if (g[i][j+1] == 0) g[i][j+1] = g[i][j], g[i][j] = 0, mark[i][j+1] = mark[i][j], mark[i][j] = false;
                else if (g[i][j+1] == g[i][j] && !mark[i][j] && !mark[i][j+1]) g[i][j+1] += g[i][j], g[i][j] = 0, mark[i][j] = true, mark[i][j+1] = true;
            }
        }
        cnt++;
    }
    print(g);
}

void up(int g[5][5]) {
    int cnt = 0;
    while (cnt <= 50) {
        for (int j = 1; j <= 4; j++) {
            for (int i = 2; i <= 4; i++) {
                if (g[i-1][j] == 0) g[i-1][j] = g[i][j], g[i][j] = 0, mark[i-1][j] = mark[i][j], mark[i][j] = false;
                else if (g[i-1][j] == g[i][j] && !mark[i][j] && !mark[i-1][j]) g[i-1][j] += g[i][j], g[i][j] = 0, mark[i][j] = true, mark[i-1][j] = true;
            }
        }
        cnt++;
    }
    print(g);
}

void down(int g[5][5]) {
    int cnt = 0;
    while (cnt <= 50) {
        for (int j = 1; j <= 4; j++) {
            for (int i = 3; i >= 1; i--) {
                if (g[i+1][j] == 0) g[i+1][j] = g[i][j], g[i][j] = 0, mark[i+1][j] = mark[i][j], mark[i][j] = false;
                else if (g[i+1][j] == g[i][j] && !mark[i][j] && !mark[i+1][j]) g[i+1][j] += g[i][j], g[i][j] = 0, mark[i][j] = true, mark[i+1][j] = true;
            }
        }
        cnt++;
    }
    print(g);
}

signed main() {
    for (int i = 1; i <= 4; i++)
        for (int j = 1; j <= 4; j++)
            cin >> g[i][j];
    int op; cin >> op;
    if (!op) left(g);
    else if (op == 1) up(g);
    else if (op == 2) right(g);
    else down(g);
    return 0;
}
