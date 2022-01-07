#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
	int t;
	cin >> t;

	int i, b, sum = 0;
	string s;

	while (t--) {
		ios::sync_with_stdio(0);
		cin.tie(0);
		cout.tie(0);

		sum = 0;

		cin >> b;
		cin >> s;

		for (i = 0; i < s.size(); i++)
			sum += s[i] - '0';

		cout << sum % (b - 1) << "\n";
	}
}
