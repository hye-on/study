#include <iostream>
#include<math.h>
using namespace std;
#define MAX_SIZE 21

int N;
bool check[MAX_SIZE];
int s[MAX_SIZE][MAX_SIZE];
int ans = 987654321;

void dfs(int cnt, int pos) // cnt: 뽑은 명수, pos: 다음 값
{
	if (cnt == N / 2) { // 카운트수가 N의 1/2이 됐을 때 능력치합 계산
		int start, link;
		start = 0;
		link = 0;

		for (int i = 1; i <= N; i++) {
			for (int j = 1; j <= N; j++) {
				if (check[i] == true && check[j] == true) 
					start += s[i][j];
				if (check[i] == false && check[j] == false) 
					link += s[i][j];
			}
		}

		int temp = abs(start - link);

		if (ans > temp) 
			ans = temp;

		return;
	}

	// 완전탐색
	for (int i = pos; i < N; i++) { 
		check[i] = true;
		dfs(cnt + 1, i + 1);
		check[i] = false; // 백트래킹
	}

}

int main() {
	cin >> N;

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cin >> s[i][j];
		}
	}

	dfs(0, 1);

	cout << ans << "\n";
}
