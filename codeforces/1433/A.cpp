/*
	Author: sngkhiem
*/

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <algorithm>
#include <queue>
#include <vector>
#include <stack>

using namespace std;

/*fast io*/
#define fastIO ios::sync_with_stdio(false); cin.tie(0);

/*push-pos define*/
#define pb push_back
#define pob pop_back
#define fi first
#define se second

/*for define*/
#define for(i,a,b) for(int i=a; i<=b; i++)
#define bor(i,a,b) for(int i=a; i>=n; i--)

/*typedef*/
typedef unsigned long long ull;
typedef long long ll;

/*constant*/
const int MOD = 1e9+7;
const ll INF = 1e18;

int main() {
	fastIO;
	#ifndef ONLINE_JUDGE
		freopen("inp.txt", "r", stdin);
		freopen("out.txt", "w", stdout);
	#endif
	int t,cur;
	cin >> t;
	for(i,1,t) {
        int res = 0, tmp = 0;
        cin >> cur;
        string cur1 = to_string(cur);
        if (cur1[0] == '1') tmp = 0;
        else if (cur1[0] == '2') tmp = 1;
        else if (cur1[0] == '3') tmp = 2;
        else if (cur1[0] == '4') tmp = 3;
        else if (cur1[0] == '5') tmp = 4;
        else if (cur1[0] == '6') tmp = 5;
        else if (cur1[0] == '7') tmp = 6;
        else if (cur1[0] == '8') tmp = 7;
        else if (cur1[0] == '9') tmp = 8;
        if (cur1.length() == 1) res = 1;
        else if (cur1.length()== 2) res = 3;
        else if (cur1.length() == 3) res = 6;
        else if (cur1.length() == 4) res = 10;
        cout << res+10*tmp << endl;
	}
	return 0;
}
