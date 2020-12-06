/*
	*  Author: Tran Hoang Khiem
	*  From THPT Nguyen Thi Minh Khai
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

using namespace std;

#define pb push_back;
#define fastIO ios::sync_with_stdio(false); cin.tie(0);

int main() {
	fastIO;
#ifndef ONLINE_JUDGE
	freopen("inp.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
#endif
	int t, n, k, x[100], y[100];
	cin >> t;
	 for (int i = 1; i <= t; i++) {
		int flag = 0, res = 0;
		cin >> n >> k;
		for (int j = 1; j <= n; j++) {
			cin >> x[j] >> y[j];
		}
		for (int j = 1; j <= n; j++) {
			res = 0;
			for (int j1 = 1; j1 <= n; j1++) {
				if (abs(x[j]-x[j1])+abs(y[j]-y[j1]) <= k && j != j1) {
					res++;
				}
				if (res == n - 1) {
					flag = 1;
					break;
				}
			}
			if (flag == 1) {
				res = 1;
				break;
			}
		}
		if (flag == 0) {
			res = -1;
		}
		cout << res << endl;
	}
	return 0;
}
