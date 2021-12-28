#include <bits/stdc++.h>

using namespace std;

int d[2005];

signed main() {
    string s,cur;
    while (getline(cin,s)) {
        vector<int> ls,missing;
        int flag = 1;
        stringstream ss(s);
        while (ss >> cur) {
            int tmp = stoi(cur);
            ls.push_back(tmp);
        }
        sort(ls.begin(),ls.end());
        for (int i = 0; i < ls.size()-1; i++)
            for (int j = i+1; j < ls.size(); j++)
                d[ls[j]-ls[i]]++;
        for (int i = 1; i < ls[ls.size()-1]; i++)
            if (d[i] == 0) missing.push_back(i);
            else if (d[i] == 2) {
                cout << "not a ruler\n"; flag = 0; break;
            }
        if (flag == 1) {
            if (missing.empty()) cout << "perfect\n";
            else {
                cout << "missing ";
                for (auto i: missing) cout << i << " ";
                cout << "\n";
            }
        }
        ls.clear();
        missing.clear();
        memset(d,0,sizeof d);
    }
    return 0;
}
