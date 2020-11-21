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
		freopen(".INP", "r", stdin);
		freopen(".OUT", "w", stdout);
	#endif
	int year, a , b, c ,d;
	cin >> year;
	while (2 > 1) {
		year++;
		a = year / 1000;
		b = year / 100 % 10;
		c = year / 10 % 10;
		d = year % 10;
		if (a != b && a != c && a != d && b != c && b != d && c != d) {
			break;
		}
	}
	cout << year;
	return 0;
}