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
#include <string>

using namespace std;

#define pb push_back;
#define fastIO ios::sync_with_stdio(false); cin.tie(0);

using ll = long long;
using ull = unsigned long long;
using uint = unsigned int;


int main() {
	fastIO;
	#ifndef ONLINE_JUDGE
		freopen("110A.INP", "r", stdin);
		freopen("110A.OUT", "w", stdout);
	#endif
	int flag = 1;
	long long res = 0;
	string res1;
	char n;
	while (cin >> n) {
		if (n == '4' || n == '7') {
			res++;
		}
	}
	res1 = to_string(res);
	for (int i = 0; i < res1.length(); i++) {
		if (res1[i] != '4' && res1[i] != '7') {
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