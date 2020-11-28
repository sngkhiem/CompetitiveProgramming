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
	int s1, s2, s3, s4, a[5], res = 4;
	a[1] = 0; a[2] = 0; a[3] = 0; a[4] = 0;
	cin >> s1 >> s2 >> s3 >> s4;
	a[1] = s1; a[2] = s2; a[3] = s3; a[4] = s4;
	for (int i = 1; i <= 3; i++) {
		for (int j = i + 1; j <= 4; j++) {
			if (a[j] == a[i]) {
				res--;
				break;
			}
		}
	}
	cout << 4-res;
	return 0;
}
