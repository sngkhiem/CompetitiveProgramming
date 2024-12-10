#include <bits/stdc++.h>

using namespace std;

signed main() {
    int des;
    int tc = 0;
    while (cin >> des) {
        cout << "CASE " << ++tc << ":\n";
        int u, v;
        int cnt = 0;
        vector<vector<bool>> adj(21, vector<bool>(21, 0));
        vector<bool> vis(21, false);
        vector<int> path;
        int mx = -1;
        while (cin >> u >> v) {
            if (u == v && u == 0)
                break;

            adj[u][v] = 1;
            adj[v][u] = 1;
            mx = max({mx, u, v});
        }

        vector<bool> vis2(21, false);
        function<void(int)> dfs = [&](int u) {
            vis2[u] = true;
            for (int i = 1; i <= mx; i++)
                if (!vis2[i] && adj[u][i])
                    dfs(i);
        };
        
        function<void(int)> backtrack = [&](int cur) {
            for (int i = 0; i < 21; i++) vis2[i] = false;
            dfs(cur);
            if (!vis2[des])
                return;
            if (path.size() > mx)
                return;
            if (cur == des) {
                cnt++;
                for (int i = 0; i < path.size(); i++) {
                    cout << path[i];
                    if (i != path.size()-1)
                        cout << " ";
                }
                cout << "\n";
            }

            for (int i = 1; i <= mx; i++) {
                if (!vis[i] && (adj[cur][i] || adj[i][cur])) {
                    vis[i] = true;
                    path.push_back(i);
                    backtrack(i);
                    vis[i] = false;
                    path.pop_back();
                }
            }
        };

        path.push_back(1);
        vis[1] = true;
        backtrack(1);
        cout << "There are " << cnt << " routes from the firestation to streetcorner " << des << ".\n";
    }
    return 0;
}