/*
	Author: sngkhiem
*/
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <set>

using namespace std;

/*faster in/out*/
#define fastIO ios::sync_with_stdio(false); cin.tie(0);

/*push-pos define*/
#define pb push_back
#define pob pop_back
#define fi first
#define se second

/*for define*/
#define For(i,a,b) for(int i=a; i<=b; i++)
#define Bor(i,a,b) for(int i=a; i>=n; i--)

/*type define*/
typedef unsigned long long ull;
typedef long long ll;

/*constant*/
const int MOD = 1e9 + 7;
const ll INF = 1e18;


int main() {
	fastIO;
	#ifndef ONLINE_JUDGE
		freopen("inp.txt", "r", stdin);
		freopen("out.txt", "w", stdout);
	#endif
// ******************************************
	int t, n, tmp;
	string b;
	cin >> t;
	For(i, 1, t) {
		string res = "1";
		cin >> n;
		cin >> b;
		if (res[0] == '1' && b[0] == '1') tmp = 2;
		else tmp = 1;
		For(j, 1, n - 1) {
			if (tmp == 2 && b[j] == '0' || tmp == 0 || tmp == 1 && b[j] == '1') res = res + '1';
			else if (tmp == 2 && b[j] == '1' || tmp == 1 && b[j] == '0') res = res + '0';
			if (res[j] == '1' && b[j] == '1') tmp = 2;
			else if (res[j] == '0' && b[j] == '0') tmp = 0;
			else tmp = 1;
		}
		cout << res << endl;
	}

	return 0;
}
