#include<iostream>
#include <cstring>
using namespace std;

char map[251][251];
int visited[251][251];

// 상하좌우
int dy[] = { 1,-1,0,0 };
int dx[] = { 0,0,1,-1 };

int r, c;
int sheep = 0, wolf = 0;
int sheepCount = 0, wolfCount = 0;

void dfs(int y, int x) {
	visited[y][x] = 1;

	if (map[y][x] == 'v')
		wolf++;
	else if (map[y][x] == 'k')
		sheep++;

	for (int i = 0; i < 4; i++) {
		int nextX = x + dx[i];
		int nextY = y + dy[i];

		if (nextX >= 0 && nextX < c && nextY >= 0 && nextY < r) {
			if (visited[nextY][nextX] != 1) {
				if (map[nextY][nextX] == '#')
					continue;
				else
					dfs(nextY, nextX);
			}
		}
	}
}

int main() {
	cin >> r >> c;

	memset(visited, 0, sizeof(visited));

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++)
			cin >> map[i][j];
	}

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (map[i][j] == '#')
				continue;

			if (visited[i][j] != 1) {
				sheep = 0;
				wolf = 0;
				dfs(i, j);  // 양,늑대가 울타리내에 있는 숫자를 구함

				if (sheep > wolf) // 울타리에 양이 더 많은 경우
					sheepCount += sheep;
				else		// 늑대보다 양이 더 적은 경우
					wolfCount += wolf;
			}
		}
	}
	cout << sheepCount << " " << wolfCount << "\n";
}
