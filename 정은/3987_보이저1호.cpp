#include <iostream>
#include <cstring>
using namespace std;

// 상우하좌
int dr[] = { -1,0,1,0 };
int dc[] = { 0,1,0,-1 };

int changeDir_1[] = { 1,0,3,2 };
int changeDir_2[] = { 3,2,1,0 };

int N, M;
char map[502][502];
bool visited[502][502][4];
int pr, pc;

char resDir[] = { 'U','R','D','L' };
int resTime = 0;
int resDirIndex;
bool isVoyager = false;

int main() {
	cin >> N >> M;

	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= M; j++)
			cin >> map[i][j];

	cin >> pr >> pc;

	//시작점부터 4방향 탐색
	for (int i = 0; i < 4; i++) {
		// 좌표, 방향, 시간, 방문 초기화
		memset(visited, false, sizeof(visited)); 
		int nr = pr;
		int nc = pc;
		int dir = i;
		int time = 1;
		visited[pr][pc][i] = true;

		while (true) {
			// 다음 시그널의 구하기
			nr += dr[dir];
			nc += dc[dir];

			if (nr <= 0 || nc <= 0 || nr > N || nc > M || map[nr][nc] == 'C') // 다음 시그널 위치가 범위를 넘어섰거나, 블랙홀을 만났을 경우 종료
				break;

			if (visited[nr][nc][dir]) { // 다음 시그널의 위치가 이전에 같은 방향으로 방문한적이 있을 경우 Voyager이므로 종료
				isVoyager = true;
				break;
			}

			if (map[nr][nc] == '/')
				dir = changeDir_1[dir];
			else if(map[nr][nc] == '\\')
				dir = changeDir_2[dir];

			visited[nr][nc][dir] = true;
			time++;
		}

		if (isVoyager) {
			resDirIndex = i;
			break;
		}
		else {
			if (time > resTime) {
				resTime = time;
				resDirIndex = i;
			}
		}
	}

	if (isVoyager) {
		cout << resDir[resDirIndex] << "\n";
		cout << "Voyager";
	}
	else {
		cout << resDir[resDirIndex] << "\n";
		cout << resTime;
	}
}
