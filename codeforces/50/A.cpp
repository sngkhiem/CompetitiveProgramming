#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int m, n;
	cin >> m >> n;
	if (m * n % 2 == 0) {
		cout << m * n / 2;
	}
	else cout << (m * n - 1) / 2;
	return 0;
}