#include <iostream>
#include <cstring>
using namespace std;

int map[50][50];
int visited[50][50];

int dy[8] = { -1,1,0,0,-1,-1,1,1 };
int dx[8] = { 0,0,-1,1,-1,1,-1,1 };

int w, h;

void dfs(int y, int x) {
	for (int i = 0; i < 8; i++) {
		int nextY = y + dy[i];
		int nextX = x + dx[i];

		if (nextX >= 0 && nextX < w && nextY >= 0 && nextY < h) {
			if (!visited[nextY][nextX] && map[nextY][nextX]) {  // 방문하지 않은 땅인 경우
				visited[nextY][nextX] = 1;
				dfs(nextY, nextX);
			}
		}
	}
}

int main() {
	while (true) {
		int cnt = 0;
		cin >> w >> h;
		if (w == 0 && h == 0)
			break;

		for (int i = 0; i < h; i++)
			for (int j = 0; j < w; j++)
				cin >> map[i][j];

		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (!visited[i][j] && map[i][j]) { // 방문하지 않은 땅인 경우
					visited[i][j] = 1;
					dfs(i, j);
					cnt++;  // 섬 개수 증가
				}
			}
		}

		cout << cnt << "\n";
		memset(visited, 0, sizeof(visited));
	}
}
