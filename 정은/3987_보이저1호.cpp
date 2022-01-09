#include <iostream>
#include <cstring>
using namespace std;

// �������
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

	//���������� 4���� Ž��
	for (int i = 0; i < 4; i++) {
		// ��ǥ, ����, �ð�, �湮 �ʱ�ȭ
		memset(visited, false, sizeof(visited)); 
		int nr = pr;
		int nc = pc;
		int dir = i;
		int time = 1;
		visited[pr][pc][i] = true;

		while (true) {
			// ���� �ñ׳��� ���ϱ�
			nr += dr[dir];
			nc += dc[dir];

			if (nr <= 0 || nc <= 0 || nr > N || nc > M || map[nr][nc] == 'C') // ���� �ñ׳� ��ġ�� ������ �Ѿ�ų�, ��Ȧ�� ������ ��� ����
				break;

			if (visited[nr][nc][dir]) { // ���� �ñ׳��� ��ġ�� ������ ���� �������� �湮������ ���� ��� Voyager�̹Ƿ� ����
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
