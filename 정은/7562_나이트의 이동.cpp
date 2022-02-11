#include <iostream>
#include <cstring>
#include <queue>
using namespace std;

struct chess {
	int x, y;
};

int n, sx, sy, ex, ey;
int map[300][300];
const int dx[] = { 2, 1, -1, -2, -2, -1, 1, 2 };
const int dy[] = { 1, 2, 2, 1, -1, -2, -2, -1 };

void bfs() {
	queue<chess> q;
	q.push({ sx, sy });

	while (!q.empty()) {
		int x = q.front().x;
		int y = q.front().y; 
		q.pop();

		if (x == ex && y == ey) {
			cout << map[x][y] << "\n";
			return;
		}

		for (int i = 0; i < 8; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx < 0 || nx >= n || ny < 0 || ny >= n) // map 범위에 존재x
				continue;
			if (map[nx][ny]) // 방문했던 자리(방문함 == 최단 루트 아님)
				continue;
			map[nx][ny] = map[x][y] + 1;
			q.push({ nx, ny });
		}
	}
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		cin >> n;
		cin >> sx >> sy;
		cin >> ex >> ey;
		memset(map, 0, sizeof(map));

		bfs();
	}
}
