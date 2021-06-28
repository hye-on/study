//플로이드 와샬 알고리즘 이용
#include <iostream>
#include <algorithm>
#include <string>

#define INF 987654321 //경로가 존재하지 않을 경우 무한대로 값을 설정

using namespace std;

int map[50][50];//친구관계 나타내는 이차원 배열.
int result = 0;
int n;

void floydWarshall()
{
	//k는 거쳐가는 노드.
	for (int k = 0; k < n; k++) {
		//i는 출발노드.
		for (int i = 0; i < n; i++) {
			//j는 도착노드.
			for (int j = 0; j < n; j++) {
				if (i == j || j == k || i == k) continue;//동일 인물 껴있는 경우는 패스.
				if (map[i][k] + map[k][j] < map[i][j]) //직접 아는 사람 = 1, 한 다리 건너서 아는 사람 = 2. 
				{
					map[i][j] = map[i][k] + map[k][j]; //k를 경유하는 경우의 값이 작으면 갱신.
				}
			}
		}
	}
}

int main(void)
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			map[i][j] = INF;
		}
	}

	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;

		for (int j = 0; j < n; j++)
		{
			if (i == j)
				map == 0; //자기 자신일 때
			if (s[j] == 'Y')
			{
				map[i][j] = 1;
				map[j][i] = 1;
			}
		}
	}

	floydWarshall();

	for (int i = 0; i < n; i++) {
		int cnt = 0;
		for (int j = 0; j < n; j++) {
			if (i == j)
				continue;
			else if (map[i][j] <= 2) {//2 넘어가는 경우도 세면 중복 카운트이므로. 
				cnt++;
			}
		}
		result = max(result, cnt);//최댓값 갱신. 
	}
	cout << result << endl;
	return 0;
}