#include <iostream>
using namespace std;

int map[20][20];
int dy[8] = {1,0,1,1, -1,0,-1,-1};
int dx[8] = {0,1,1,-1, 0,-1,-1,1};

bool gameOver(int y, int x) {
	for (int i = 0; i < 4; i++) {
		int cnt = 1;

		for (int j = 1; j < 5; j++) {
			int ny = y + dy[i] * j;
			int nx = x + dx[i] * j;
			if (ny > 19 || ny < 1 || nx > 19 || nx < 1)
				break;
			if (map[y][x] == map[ny][nx])
				cnt++;
			else
				break;
		}
		for (int j = 1; j < 5; j++) {
			int ny = y + dy[i + 4] * j;
			int nx = x + dx[i + 4] * j;
			if (ny > 19 || ny < 1 || nx > 19 || nx < 1)
				break;
			if (map[y][x] == map[ny][nx])
				cnt++;
			else
				break;
		}

		if (cnt == 5)
			return true;
	}
	return false;
}

int main() {
	int n, x, y;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> y >> x;		//»óÇÏÁÂÇ¥, ÁÂ¿ìÁÂÇ¥
		if (i % 2 == 1)
			map[y][x] = 1; //black
		else
			map[y][x] = 2; //white

		if (gameOver(y, x)) {
			cout << i << '\n';
			return 0;
		}
	}
	cout << -1 << '\n';
	return 0;
}
