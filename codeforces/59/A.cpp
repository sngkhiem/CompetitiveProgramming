/*
					*
	            *  * *
	*  *  *  *  *  ***  *        *
	* *   *  *  *  *    **      **  
	**    ****  *  ***  * *    * *
	* *   *  *  *  *    *  *  *  *
	*  *  *  *  *  ***  *    *   *
*/

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

#define pb push_back;
#define fastIO ios::sync_with_stdio(false); cin.tie(0);

using ll = long long;
using ull = unsigned long long;
using uint = unsigned int;


int main() {
	fastIO;
	#ifndef ONLINE_JUDGE
		freopen("59A.INP", "r", stdin);
		freopen("59A.OUT", "w", stdout);
	#endif
	char tmp;
	string cur;
	int hoa = 0, thuong = 0;
	cur = "";
	while (cin >> tmp) {
		if (tmp >= 'A' && tmp <= 'Z') {
			hoa++;
		}
		else thuong++;
		cur += tmp;
	}
	if (hoa > thuong) {
		for (int i = 0; i < cur.length(); i++) {
			if (cur[i] >= 'a' && cur[i] <= 'z') {
				cur[i] -= 32;
			}
		}
	}
	else for (int i = 0; i < cur.length(); i++) {
		if (cur[i] >= 'A' && cur[i] <= 'Z') {
			cur[i] += 32;
		}
	}
	cout << cur;
	return 0;
}