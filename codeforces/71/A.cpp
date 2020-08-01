#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	string arr[101];
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		if (arr[i].length() > 10) {
			cout << arr[i][0] + to_string(arr[i].length() - 2) + arr[i][arr[i].length() - 1] << endl;
		}
		else cout << arr[i] << endl;
	}
	return 0;
}