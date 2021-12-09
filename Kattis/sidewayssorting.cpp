#include <bits/stdc++.h>
using namespace std;

bool myfunction (char i,char j) { return (tolower(i) > tolower(j)); }
bool myfunction2 (string s1,string s2) { //return (lexicographical_compare( s1.begin(), s1.end(), s2.begin(), s2.end(), myfunction ));
	string t1 = s1;
	string t2 = s2;
	transform(s1.begin(), s1.end(), t1.begin(), ::toupper);
	transform(s2.begin(), s2.end(), t2.begin(), ::toupper);
	return (t1 < t2);
}
int main() {
	int r = 1, c = 1;
	string word;

	while (true) {

		cin >> r >> c;
		if (!r) {
			break;
		}
		vector<string> vq(c);
		for(int k = 0; k < r ; k++) {
			word = "";
			cin >> word;
			for(int i = 0; i < word.length(); i++) {
				vq[i] += word[i];
			}
		}
		sort(vq.begin(), vq.end(), myfunction2);
		for (int x = 0; x < r; x++) {
			for (int y = 0; y < c; y++) {
				cout << vq[y][x];
			}
			cout << endl;
		}
		cout << endl;
	}
}
