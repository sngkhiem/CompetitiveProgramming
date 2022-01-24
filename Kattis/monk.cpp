#include <bits/stdc++.h>

using namespace std;

const int MAXN = 5005;

pair<int,int> a[MAXN],d[MAXN];

signed main() {
        int n,m; cin >> n >> m;
            double h = 0, t = 0;
            for (int i = 0; i < n; i++) {
                        cin >> a[i].first >> a[i].second;
                                h += a[i].first; t += a[i].second;
                                    
            }
                for (int i = 0; i < m; i++) cin >> d[i].first >> d[i].second;

                    double lo = 0, hi = t;
                    for (int j = 1; j <= 100; j++) {
                                double mi = (lo+hi)/2;

                                        double curTime = mi;
                                                double curA = 0;
                                                for (int i = 0; i < n; i++) {
                                                    if (a[i].second < curTime) {
                                                                        curA += a[i].first;
                                                                                        curTime -= a[i].second;
                                                                                                    
                                                    } else {
                                                                        curA += (a[i].first*curTime/a[i].second);
                                                                                        break;
                                                                                                    
                                                    }
                                                            
                                                }

                                                        curTime = mi;
                                                                double curD = h;
                                                                for (int i = 0; i < m && curD > 0; i++) {
                                                                    if (d[i].second < curTime) {
                                                                                        curD -= d[i].first;
                                                                                                        curTime -= d[i].second;
                                                                                                                    
                                                                    } else {
                                                                                        curD -= (d[i].first*curTime/d[i].second);
                                                                                                        break;
                                                                                                                    
                                                                    }
                                                                            
                                                                }

                                                                        if (curA >= curD) hi = mi;
                                                                                else lo = mi;
                                                                                    
                    } 
                        cout << setprecision(5) << fixed << lo;
                            return 0;
                            
}
