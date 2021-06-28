#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, m, cnt = 0;
	cin >> n >> m;

	vector<vector<int>> a(n);
	vector<vector<int>> b(n);

	for (int i = 0; i < n; i++)
	{
		a[i] = vector<int>(m);
	}
	for (int i = 0; i < n; i++)
	{
		b[i] = vector<int>(m);
	}

	//행렬a 입력
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int n;
			scanf_s("%1d", &n);
			a[i][j] = n;
		}
	}
	//행렬b 입력
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int n;
			scanf_s("%1d", &n);
			b[i][j] = n;
		}
	}

	for (int i = 0; i < n - 2; i++)
	{
		for (int j = 0; j < m - 2; j++)
		{
			if (a[i][j] != b[i][j])
			{
				//3*3크기 내의 모든 원소를 뒤집음
				for (int k = i; k < i + 3; k++)
				{
					for (int t = j; t < j + 3; t++)
					{
						if (a[k][t] == 0)
							a[k][t] = 1;
						else if (a[k][t] == 1)
							a[k][t] = 0;
					}
				}
				cnt++;
			}
		}
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] != b[i][j])
			{
				cout << "-1" << endl;
				return 0;
			}

		}
	}
	
	cout << cnt << endl;

	return 0;
}