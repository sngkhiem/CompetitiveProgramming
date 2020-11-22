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
		freopen("677A.INP", "r", stdin);
		freopen("677A.OUT", "w", stdout);
	#endif
	int n, h, res = 0, cur;
	cin >> n >> h;
	for (int i = 1; i <= n; i++) {
		cin >> cur;
		if (cur > h) {
			res += 2;
		}
		else res++;
	}
	cout << res;
	return 0;
}