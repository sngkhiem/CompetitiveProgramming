#include <bits/stdc++.h>

using namespace std;

vector<vector<char>> v;

int count(int i, int j) {
    int total = 0;
    if(v[i+1][j] == 's') {
        total++;
    }
    if(v[i-1][j] == 's') {
        total++;
    }
    if(v[i][j+1] == 's') {
        total++;
    }
    if(v[i][j-1] == 's') {
        total++;
    }
    return total;
}

bool untouched(int i, int j, int m, int n) {
    if(i < 0 || j < 0 || i >= m+2 || j >= n+2) {
        return false;
    }
    if(v[i][j] != '0') {
        return false;
    }
    return true;
}

signed main() {
    int m, n;
    cin >> m >> n;

    
    v.resize(m+2, vector<char>(n+2, '0'));

    // Read in data
    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> v[i][j];
        }
    }

    queue<pair<int, int>> q;
    q.push({0,0});

    while(!q.empty()) {
        int i = q.front().first;
        int j = q.front().second;
        q.pop();

        if(v[i][j] != '0') {
            continue;
        }

        v[i][j] = 's';

        if(untouched(i+1, j, m, n)) {
            q.push({i+1, j});
        }
        if(untouched(i-1, j, m, n)) {
            q.push({i-1, j});
        }
        if(untouched(i, j+1, m, n)) {
            q.push({i, j+1});
        }
        if(untouched(i, j-1, m, n)) {
            q.push({i, j-1});
        }
    }

    // Count the edges
    /*int total = 0;
    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= n; j++) {
            if(v[i][j] == '1') {
                total += count(i, j);
            }
        }
    }
    cout << total << endl;*/
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }
}