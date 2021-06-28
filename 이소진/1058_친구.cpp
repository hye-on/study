//�÷��̵� �ͼ� �˰��� �̿�
#include <iostream>
#include <algorithm>
#include <string>

#define INF 987654321 //��ΰ� �������� ���� ��� ���Ѵ�� ���� ����

using namespace std;

int map[50][50];//ģ������ ��Ÿ���� ������ �迭.
int result = 0;
int n;

void floydWarshall()
{
	//k�� ���İ��� ���.
	for (int k = 0; k < n; k++) {
		//i�� ��߳��.
		for (int i = 0; i < n; i++) {
			//j�� �������.
			for (int j = 0; j < n; j++) {
				if (i == j || j == k || i == k) continue;//���� �ι� ���ִ� ���� �н�.
				if (map[i][k] + map[k][j] < map[i][j]) //���� �ƴ� ��� = 1, �� �ٸ� �ǳʼ� �ƴ� ��� = 2. 
				{
					map[i][j] = map[i][k] + map[k][j]; //k�� �����ϴ� ����� ���� ������ ����.
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
				map == 0; //�ڱ� �ڽ��� ��
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
			else if (map[i][j] <= 2) {//2 �Ѿ�� ��쵵 ���� �ߺ� ī��Ʈ�̹Ƿ�. 
				cnt++;
			}
		}
		result = max(result, cnt);//�ִ� ����. 
	}
	cout << result << endl;
	return 0;
}