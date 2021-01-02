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

int main() {
	fastIO;
	#ifndef ONLINE_JUDGE 
		freopen("inp.txt", "r", stdin); 
		freopen("out.txt", "w", stdout); 
	#endif
// ****************************************
	int t, n, a[51];
	cin >> t;
	for (i, 1, t) {
		set<int> res;
		cin >> n;
		for (j, 1, n) {
			cin >> a[j];
		}
		for (j, 1, n - 1) {
			for (j1, j + 1, n) {
				res.insert(a[j]-a[j1]);
			}
		}
		cout << res.size() << endl;
	}
	return 0;
}
