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
	int k, l, m, n;
	long d, a[100000], res = 0;
	cin >> k >> l >> m >> n >> d;
	for (int i = 1; i <= d; i++) {
		if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) {
			res++;
		}
	}
	cout << res;
	return 0;
}
