#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int map[101][101];
string dp[101][101];	//dp[a][b] = c : (a, b)까지 올 수 있는 경로의 수는 c개

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> map[i][j];

	//점프를 해서 도착한 곳의 dp에 +1을 해줌. 점프를 해서 map[a][b]에 도착했다면 dp[a][b]에 +1. dp[a][b]값 == map[a][b]를 거친 횟수
	int jump, down, right;
	int car = 0;  // 올림수
	string res = "";  // 나머지 수
	

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

			onesize = dp[i][j].size();  // 첫번째 수의 자릿수
			twosize = dp[down][j].size();  // 두번째 수의 자릿수

			if (down < n) {
				while (onesize > 0 || twosize > 0) {
					nn1 = 0;  // 첫번째 수의 자릿수 중 하나(일의 자리부터 시작)
					if (onesize > 0)
						nn1 = dp[i][j][--onesize] - '0';  // 문자를 숫자로 바꿔줌
					nn2 = 0;
					if (twosize > 0)
						nn2 = dp[down][j][--twosize] - '0';
					int cur = nn1 + nn2 + car;
					car = cur / 10;  // 올림수 변경
					cur %= 10;
					char ccar = cur + '0';  // 문자로 변환
					res += ccar;
				}
				if (car > 0) // 올림수가 마지막까지 남아있다면
					res += car + '0';
				reverse(res.begin(), res.end());
				dp[down][j] = res;
				car = 0;
				res.clear();
			}

			onesize = dp[i][j].size();  // 첫번째 수의 자릿수
			twosize = dp[i][right].size();  // 두번째 수의 자릿수
				
			if (right < n) {
				while (onesize > 0 || twosize > 0) {
					nn1 = 0;  // 첫번째 수의 자릿수 중 하나(일의 자리부터 시작)
					if (onesize > 0)
						nn1 = dp[i][j][--onesize] - '0';  // 문자를 숫자로 바꿔줌
					nn2 = 0;
					if (twosize > 0)
						nn2 = dp[i][right][--twosize] - '0';
					int cur = nn1 + nn2 + car;
					car = cur / 10;  // 올림수 변경
					cur %= 10;
					char ccar = cur + '0';  // 문자로 변환
					res += ccar;
				}
				if (car > 0) // 올림수가 마지막까지 남아있다면
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
