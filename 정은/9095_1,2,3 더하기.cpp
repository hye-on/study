#include <iostream>
using namespace std;

int T, n;
int DP[11];

int main() {
	DP[1] = 1;
	DP[2] = 2;
	DP[3] = 4;

	cin >> T;

	while(T--) {
		cin >> n;

		for (int i = 4; i <= n; i++)
			DP[i] = DP[i - 1] + DP[i - 2] + DP[i - 3];

		cout << DP[n] << "\n";
	}

	return 0;
}
