#include<iostream>
#include<algorithm>

using namespace std;


//int red[1001], green[1001],blue[1001];
int num[1001][3];

int dp[1001][3];

//�ǹ� 1  dp
int main()
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> num[i][0] >> num[i][1] >> num[i][2];
	
	dp[0][0] = num[0][0];
	dp[0][1] = num[0][1];
	dp[0][2] = num[0][2];
	
	for (int i = 1; i < N; i++)//���� ������ �����ؼ� �� ����.
	{
		dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + num[i][0];//i��°�� �������� �� ���
		dp[i][1] = min(dp[i - 1][2], dp[i - 1][0]) + num[i][1];//i��°�� �ʷϻ��� �� ���
		dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + num[i][2];
	}
	cout << min(dp[N - 1][0],min( dp[N - 1][1], dp[N - 1][2]));
	
}