#include <iostream>
using namespace std;

int map[5][5];
bool visit[1000000];
int ans = 0;
//상하좌우로 움직일 수 있음
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};

void dfs(int x, int y, int num, int cnt) {
	if (cnt == 6) {	//6자리 수가 만들어졌을 때
		if (!visit[num]) {
			visit[num] = true;
			ans++;
		}
		return;
	}

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx >= 0 && ny >= 0 && nx < 5 && ny < 5)
			dfs(nx, ny, num * 10 + map[nx][ny], cnt + 1);
	}
}

int main() {
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			cin >> map[i][j];
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			dfs(i, j, map[i][j], 1);
	cout << ans << '\n';

	return 0;
}
