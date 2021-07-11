#include <iostream>
#include <string>
using namespace std;

int n, i, j, k, ans;
string str[101];

int main() {
	cin >> n;
	for (i = 0; i < n; i++) cin >> str[i];
	for (i = 0; i < n - 1; i++) for (j = i + 1; j < n; j++) {
		int chk1[27] = { 0 }, chk2[27] = { 0 };
		for (k = 0; k < str[i].length(); k++) {
			int a = str[i][k] - 'a' + 1, b = str[j][k] - 'a' + 1;
			if (!chk1[a] && !chk2[b]) chk1[a] = b, chk2[b] = a;
			else if (chk1[a] != b) break;
		}
		if (k >= str[i].length()) ans++;
	}
	cout << ans;
	return 0;
}
