#include <iostream>
#include <algorithm>

//백준: 12865번 평범한 배낭
//사용 알고리즘: Knapsack(배낭)알고리즘 (참고: https://naivep.tistory.com/72)
// item[][0] > 무게		item[][1] > 가치
// D[i][j]> i번째까지의 물품을 탐색한 상태, j만큼의 무게를 가졌을 때 가능한 최대 가치
// D[i][j]의 2가지 경우		1. i번째 물품을 포함하는 경우		2. i번째 물품을 포함하지 않는 경우

using namespace std;
int item[101][2] = { 0 };
int D[101][100001] = { 0 };

int main() {
	int n, k;
	cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		cin >> item[i][0] >> item[i][1];
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= k; j++) {
			D[i][j] = D[i - 1][j];
			if (j - item[i][0] >= 0) {
				D[i][j] = max(D[i][j], D[i - 1][j - item[i][0]] + item[i][1]);
			}
		}
	}

	cout << D[n][k];

	return 0;
}
