#include <iostream>
using namespace std;

int dp[1001];
int partition(int n) {
	int result = 0;
	if (dp[n])
		return dp[n];
	for (int i = 1; i <= n / 2; i++)
		result += partition(i);
	dp[n] = result + 1;
	return result + 1;
}


int main() {
	int t;
	cin >> t;

	int n;
	dp[1] = 1;
	while (t--) {
		cin >> n;
		cout << partition(n) << '\n';
	}
}
