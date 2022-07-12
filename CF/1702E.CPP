/*
    Author: Tran Hoang Khiem
    School: Nguyen Thi Minh Khai High School
*/
#include <bits/stdc++.h>

using namespace std;

#define all(a) a.begin(),a.end()
#define ll long long

int flag;
int color[200005];
vector<int> adj[200005];

void dfs(int u, int c) {
    color[u] = c;
    for (auto x: adj[u]) {
        if (!color[x]) dfs(x,3-c);
        else if (color[x] != 3-c) flag = 0;
    }
}

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        pair<int,int> a[n+1];
        unordered_map<int,int> mark;
        for (int i = 1; i <= n; i++) color[i] = 0;
        for (int i =1; i <= n; i++) {
            cin >> a[i].first >> a[i].second;
            mark[a[i].first]++; mark[a[i].second]++;
            adj[a[i].first].push_back(a[i].second);
            adj[a[i].second].push_back(a[i].first);
        }
        flag = 1;
        for (int i = 1; i <= n; i++) {
            if (mark[i] >= 3) {
                flag = 0;
                break;
            }
            if (!color[i]) dfs(i,1);
        }
        cout << (flag ? "YES\n" : "NO\n");
        for (int i = 1; i <= n; i++) adj[i].clear();

    }
    return 0;
}
