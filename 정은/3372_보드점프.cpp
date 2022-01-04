#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int map[101][101];
string dp[101][101];	//dp[a][b] = c : (a, b)���� �� �� �ִ� ����� ���� c��

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> map[i][j];

	//������ �ؼ� ������ ���� dp�� +1�� ����. ������ �ؼ� map[a][b]�� �����ߴٸ� dp[a][b]�� +1. dp[a][b]�� == map[a][b]�� ��ģ Ƚ��
	int jump, down, right;
	int car = 0;  // �ø���
	string res = "";  // ������ ��
	

	int onesize, twosize;
	int nn1, nn2;

	dp[0][0] = "1";

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			if (dp[i][j] == "" || (i == n - 1 && j == n - 1))
				continue;
			jump = map[i][j];
			down = jump + i;
			right = jump + j;

			onesize = dp[i][j].size();  // ù��° ���� �ڸ���
			twosize = dp[down][j].size();  // �ι�° ���� �ڸ���

			if (down < n) {
				while (onesize > 0 || twosize > 0) {
					nn1 = 0;  // ù��° ���� �ڸ��� �� �ϳ�(���� �ڸ����� ����)
					if (onesize > 0)
						nn1 = dp[i][j][--onesize] - '0';  // ���ڸ� ���ڷ� �ٲ���
					nn2 = 0;
					if (twosize > 0)
						nn2 = dp[down][j][--twosize] - '0';
					int cur = nn1 + nn2 + car;
					car = cur / 10;  // �ø��� ����
					cur %= 10;
					char ccar = cur + '0';  // ���ڷ� ��ȯ
					res += ccar;
				}
				if (car > 0) // �ø����� ���������� �����ִٸ�
					res += car + '0';
				reverse(res.begin(), res.end());
				dp[down][j] = res;
				car = 0;
				res.clear();
			}

			onesize = dp[i][j].size();  // ù��° ���� �ڸ���
			twosize = dp[i][right].size();  // �ι�° ���� �ڸ���
				
			if (right < n) {
				while (onesize > 0 || twosize > 0) {
					nn1 = 0;  // ù��° ���� �ڸ��� �� �ϳ�(���� �ڸ����� ����)
					if (onesize > 0)
						nn1 = dp[i][j][--onesize] - '0';  // ���ڸ� ���ڷ� �ٲ���
					nn2 = 0;
					if (twosize > 0)
						nn2 = dp[i][right][--twosize] - '0';
					int cur = nn1 + nn2 + car;
					car = cur / 10;  // �ø��� ����
					cur %= 10;
					char ccar = cur + '0';  // ���ڷ� ��ȯ
					res += ccar;
				}
				if (car > 0) // �ø����� ���������� �����ִٸ�
					res += car + '0';
				reverse(res.begin(), res.end());
				dp[i][right] = res;
				car = 0;
				res.clear();
			}
		}
	}
	if (dp[n - 1][n - 1] == "")
		cout << 0;
	else
		cout << dp[n-1][n-1];
}
