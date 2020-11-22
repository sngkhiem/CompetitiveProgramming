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
		freopen("344A.INP", "r", stdin);
		freopen("344A.OUT", "w", stdout);
	#endif
		long n, res = 0;;
	string cur, tmp = "";
	cin >> n;	
	for (int i = 1; i <= n; i++) {
		cin >> cur;
		if (cur != tmp) {
			res++;
		}
		tmp = cur;
	}
	cout << res;
	return 0;
}