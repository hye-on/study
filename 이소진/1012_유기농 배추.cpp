#include <iostream>
using namespace std;

int cabbage[50][50] = { 0 };
int visited[50][50] = { 0 };
int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };
int m, n, k;
int cnt = 0;

void dfs(int x, int y)
{
	int nx, ny;
	visited[x][y] = 1;

	for (int i = 0; i < 4; i++)
	{
		nx = x + dx[i];
		ny = y + dy[i]; //다음 탐색할 곳

		//nx와 ny가 지도 범위를 벗어났을 때
		if (nx >= n || nx < 0 || ny >= m || ny < 0)
		{
			continue;
		}

		//방문하지 않았고, 1일 경우 
		if (visited[nx][ny] == 0 && cabbage[nx][ny] == 1)
		{
			dfs(nx, ny); //재귀호출
		}
	}
}

int main()
{
	int x, y, t;
	cin >> t;
	
	for (int i = 0; i < t; i++)
	{
		//초기화
		cnt = 0;
		
		for (int i = 0; i < 50; i++)
		{
			for (int j = 0; j < 50; j++)
			{
				visited[i][j] = 0;
			}
		}

		for (int i = 0; i < 50; i++)
		{
			for (int j = 0; j < 50; j++)
			{
				cabbage[i][j] = 0;
			}
		}

		//입력
		cin >> m >> n >> k;

		//배추 위치 저장
		for (int i = 0; i < k; i++)
		{
			cin >> x >> y;
			cabbage[y][x] = 1;
		}

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (visited[i][j] == 0 && cabbage[i][j] == 1)
				{
					dfs(i, j);
					cnt++;
				}
			}
		}

		cout << cnt << endl;
	}

	

	return 0;
}