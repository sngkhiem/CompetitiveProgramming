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
	int n, a[105], flag = 0, tmp, p, q;
	cin >> n >> p;
	for (int i = 1; i <= 105; i++) {
		a[i] = 0;
	}
	for (int i = 1; i <= p; i++) {
		cin >> tmp;
		a[tmp]++;
	}
	cin >> q;
	for (int i = 1; i <= q; i++) {
		cin >> tmp;
		a[tmp]++;
	}
	for (int i = 1; i <= n; i++) {
		if (a[i] == 0) {
			flag = 1;
			break;
		}
	}
	if (flag == 0) {
		cout << "I become the guy.";
	}
	else cout << "Oh, my keyboard!";
	return 0;
}
