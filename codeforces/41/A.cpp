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
		freopen("41A.INP", "r", stdin);
		freopen("41A.OUT", "w", stdout);
	#endif
	int flag = 1;
	string a, b;
	cin >> a;
	cin >> b;
	int tmp = b.length() - 1;
	for (int i = 0; i < a.length(); i++) {
		if (a[i] != b[tmp - i]) {
			flag = 0;
			break;
		}
	}
	if (flag == 0) {
		cout << "NO";
	}
	else cout << "YES";
	return 0;
}