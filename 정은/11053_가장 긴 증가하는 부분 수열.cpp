#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int arr[1000];
int dp[1000];

int main() {
	int N;
	cin >> N;

	fill_n(dp, N, 1);  // dp 배열을 1로 초기화
	for (int i = 0; i < N; i++)
		cin >> arr[i];

	for (int i = 1; i < N; i++) {
		for (int j = 0; j < i; j++) {
			if (arr[i] > arr[j])
				dp[i] = max(dp[i], dp[j] + 1);
		}
	}

	sort(dp, dp + N);

	cout << dp[N - 1] << "\n";
}
