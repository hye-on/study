#include <iostream>
using namespace std;

int n;
int i, j;
int a[1001], dp[1001];
int mx = 0;

int main() {
	cin >> n;

	for (i = 1; i <= n; i++)
		cin >> a[i];

	for (i = 1; i <= n; i++) {
		dp[i] = a[i];

		for (j = 1; j < i; j++)
			if (a[j] < a[i] && dp[i] < dp[j] + a[i])
				dp[i] = dp[j] + a[i];

		if (mx < dp[i])
			mx = dp[i];
	}
	cout << mx;
}
