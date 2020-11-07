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
		freopen("977A.INP", "r", stdin);
		freopen("977A.OUT", "w", stdout);
	#endif
	long n;
	int k;
	cin >> n >> k;
	for (int i = 1; i <= k; i++) {
		if (n % 10 == 0) {
			n /= 10;
		}
		else n--;
	}
	cout << n;
	return 0;
}