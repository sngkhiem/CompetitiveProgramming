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
	long n, a = 0, d = 0;
	char tmp;
	
	cin >> n;
	for (int i=0; i<n; i++) {
		cin >> tmp;
		if (tmp == 'A') {
			a++;
		}
		else d++;
	}
	if (a > d) {
		cout << "Anton";
	}
	else if (d > a) {
		cout << "Danik";
	}
	else cout << "Friendship";
	return 0;
}