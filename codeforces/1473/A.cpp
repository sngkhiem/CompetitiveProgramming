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
#define for(i,a,b) for(int i=a; i<=b; i++)
#define bor(i,a,b) for(int i=a; i>=n; i--)

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
	int t, n, d, a[100];
	cin >> t;
	for (i, 1, t) {
		int flag = 0, max = 0;
		cin >> n >> d;
		for (j, 1, n) {
			cin >> a[j];
			if (max < a[j]) max = a[j];
		}
		if (max <= d) cout << "YES" << endl;
		else {
			for (j, 1, n - 1) {
				for (j1, 1, n) {
					if (j1 != j && a[j1] + a[j] <= d) {
						flag = 1;
						break;
					}
				}
			}
			if (flag == 1) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
		
	}

	return 0;
}
