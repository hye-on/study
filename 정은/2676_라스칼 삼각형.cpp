#include <iostream>
using namespace std;

int rascal(int n, int m) {
	int count = 0;
	int ans = 1;
	int temp = n;

	while (true) {
		if (count == m)
			break;

		if (ans == 1) {
			temp -= 1;
			ans += temp;
		}
		else {
			temp -= 2;
			ans += temp;
		}
		count++;
	}

	return ans;
}

int main() {
	int t;
	int n, m;

	cin >> t;
	while (t--) {
		cin >> n >> m;
		if (m > n / 2)
			m = n - m;
		cout << rascal(n, m) << '\n';
	}
}
