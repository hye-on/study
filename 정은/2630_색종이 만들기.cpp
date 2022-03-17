#include <iostream>
using namespace std;

int n;
int map[128][128];
int blue, white;  //  1, 0

void check(int y, int x, int size) {
	int current = map[y][x];  // 현재 좌표의 색상

	// current가 존재하는 사분면 탐색
	for (int i = y; i < y + size; i++) {
		for (int j = x; j < x + size; j++) {
			if (current == 0 && map[i][j] == 1)
				current = -1;
			else if (current == 1 && map[i][j] == 0)
				current = -1;

			// 종이를 나눈 뒤 다시 제2/1/3/4 사분면 탐색
			if (current == -1) {
				check(y, x, size / 2);
				check(y, x + size / 2, size / 2);
				check(y + size / 2, x, size / 2);
				check(y + size / 2, x + size / 2, size / 2);
				return;
			}
		}
	}
	if (current == 0)
		white++;
	else
		blue++;
}

int main() {
	cin >> n;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> map[i][j];

	check(0, 0, n);

	cout << white << '\n';
	cout << blue << '\n';

	return 0;
}
