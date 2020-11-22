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

using namespace std;

#define pb push_back;
#define fastIO ios::sync_with_stdio(false); cin.tie(0);

using ll = long long;
using ull = unsigned long long;
using uint = unsigned int;


int main() {
	fastIO;
	#ifndef ONLINE_JUDGE
		freopen("1030A.INP", "r", stdin);
		freopen("1030A.OUT", "w", stdout);
	#endif
	int n, cur, flag = 1;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> cur;
		if (cur == 1) {
			flag = 0;
			break;
		}
	}
	if (flag == 1) {
		cout << "EASY";
	}
	else cout << "HARD";
	return 0;
}