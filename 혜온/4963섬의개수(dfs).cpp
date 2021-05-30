#include <iostream>
#include <vector>

using namespace std;
int map[51][51];
int check[51][51]; //0으로 초기화
int w = 1, h = 1;

int dx[] = { -1, 1, -1, 1, 0, 0, -1, 1 }; 
int dy[] = { -1, 1, 1, -1, 1, -1, 0, 0 }; //대각선으로도 갈수 있으므로 이동할 수 있는 경우의 수가 8개
void dfs(int x, int y)
{
	check[x][y] = true; // 방문
	for (int i = 0; i < 8; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx < 0 || ny < 0 || nx >= h || ny >= w)// 범위 벗어나지 않는지
			continue;
		if (!check[nx][ny] && map[nx][ny]) // 방문하지 않았고 땅이라면 
			dfs(nx, ny); // dfs 호출
	}
}
int main()
{//섬의 개수 출력 땅이 1 바다가 0

	while (true) {
		int count = 0;
		cin >> w >> h;
		if (!w && !h) //예외 1,0   0,1 의 땅은 존재 X
			break;
		for (int i = 0; i < h; i++) { 
			for (int j = 0; j < w; j++) {
				check[i][j] = false;
				cin >> map[i][j];
			}
		}
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (!check[i][j] && map[i][j]) { 
					count++; // 한 면적만 1이여도 섬이니까 미리 체크
					dfs(i, j);// 연결된 땅들을 체크하기 위해
				}
			}
		}
		cout << count << "\n";
	}

	return 0;
}