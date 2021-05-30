#include <iostream>
#include <vector>

using namespace std;
int map[51][51];
int check[51][51]; //0���� �ʱ�ȭ
int w = 1, h = 1;

int dx[] = { -1, 1, -1, 1, 0, 0, -1, 1 }; 
int dy[] = { -1, 1, 1, -1, 1, -1, 0, 0 }; //�밢�����ε� ���� �����Ƿ� �̵��� �� �ִ� ����� ���� 8��
void dfs(int x, int y)
{
	check[x][y] = true; // �湮
	for (int i = 0; i < 8; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx < 0 || ny < 0 || nx >= h || ny >= w)// ���� ����� �ʴ���
			continue;
		if (!check[nx][ny] && map[nx][ny]) // �湮���� �ʾҰ� ���̶�� 
			dfs(nx, ny); // dfs ȣ��
	}
}
int main()
{//���� ���� ��� ���� 1 �ٴٰ� 0

	while (true) {
		int count = 0;
		cin >> w >> h;
		if (!w && !h) //���� 1,0   0,1 �� ���� ���� X
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
					count++; // �� ������ 1�̿��� ���̴ϱ� �̸� üũ
					dfs(i, j);// ����� ������ üũ�ϱ� ����
				}
			}
		}
		cout << count << "\n";
	}

	return 0;
}