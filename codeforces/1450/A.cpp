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
	int t, n;
	char tmp;
	string cur;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		cin >> n;
		cin >> cur;
		int res = 0;
		for (int j = 0; j < n; j++) {
			if (cur[j] == 't') {
				res++;
			}
			else cout << cur[j];
		}
		for (int j = 1; j <= res; j++) {
			cout << 't';
		}
		cout << endl;
	}
	return 0;
}
