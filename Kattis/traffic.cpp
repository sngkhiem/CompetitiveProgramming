#include <bits/stdc++.h>

using namespace std;

int time1[1000005],time2[1000005];

signed main() {
    int start1,start2; cin >> start1 >> start2;
    int n1,n2; cin >> n1;
    for (int i = 0; i < n1; i++) {
        int tmp; cin >> tmp;
        time1[tmp] = 1;
    }
    cin >> n2;
    for (int i = 0; i < n2; i++) {
        int tmp; cin >> tmp;
        time2[tmp] = 1;
    }
    if (start1 > start2) {
        swap(start1,start2);
        swap(time1,time2);
    }

    int curChange1 = 0, curChange2 = 0;
    for (int i = 0; i <= 1000000; i++) {
        start1 += curChange1;
        start2 += curChange2;
        if (time1[i] == 1) {
            if (curChange1 == 1) curChange1 = 0;
            else curChange1 = 1;
        }
        if (time2[i] == 1) {
            if (curChange2 == 1) curChange2 = 0;
            else curChange2 = 1;
        }
        if (start2 - start1 <= 4) {
            cout << "bumper tap at time " << i << endl;
            return 0;
        }
    }
    cout << "safe and sound\n";
    return 0;
}
