#include <bits/stdc++.h>

using namespace std;


signed main() {
    int n; cin >> n;
    int tmp; int lastClean = 0; int ans = 0;
    vector<int> push,tmpPush;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        push.push_back(tmp);
    }
    for (int i = 0; i < n; i++) {
        tmp = 0;
        for (int j = 0; j < tmpPush.size(); j++)
            tmp += push[i] - lastClean - tmpPush[j];
        if (tmp < 20) tmpPush.push_back(push[i] - lastClean);
        else {
            lastClean = push[i];
            ans++;
            tmpPush.clear();
            tmpPush.push_back(push[i] - lastClean);
        }
    }
    cout << ans+1;
    return 0;
}
