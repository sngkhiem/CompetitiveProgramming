#include <bits/stdc++.h>

using namespace std;

map<string,vector<string>> adj;
map<string,bool> vis;
map<string,string> par;

void bfs(string u) {
    queue<string> q; q.push(u);
    vis[u] = true;
    while (!q.empty()) {
        string u = q.front(); q.pop();
        for (auto v: adj[u])
            if (!vis[v]) {
                vis[v] = true; q.push(v);
                par[v] = u;
            }
    }
}

signed main() {
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        string s,u,v = ""; cin >> u;
        char tmp; cin.ignore();
        getline(cin,s);
        for (int j = 0; j < s.size(); j++) {
            if (s[j] == ' ') {
                adj[u].push_back(v);
                adj[v].push_back(u);
                v = "";
            } else v.push_back(s[j]);
        }
        if (v != "") {
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
    }
    string Start,End; cin >> Start >> End;
    bfs(Start);
    if (!vis[End]) cout << "no route found";
    else {
        vector<string> path;
        string cur = End;
        while (cur != Start) {
            path.push_back(cur);
            cur = par[cur];
        }
        path.push_back(Start);
        reverse(path.begin(),path.end());
        for (auto x: path) cout << x << " ";
    }

    /*cout << endl;
    for (auto u: adj) {
        cout << u.first << " ";
        for (auto v: adj[u.first]) cout << v << " ";
        cout << "\n";
    }*/
    return 0;
}
