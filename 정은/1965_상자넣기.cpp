#include <iostream>
#include <algorithm>
using namespace std;

int arr[1000];
int dp[1000];

int main() {
	int n, ans = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (arr[j] < arr[i])
				dp[i] = max(dp[i], dp[j] + 1);
			ans = max(ans, dp[i]);
		}
	}
	cout << ans+1;
}
