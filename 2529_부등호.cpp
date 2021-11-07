#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int k;
char sign[10];
string ans;
vector<string> result;
bool visited[10];

void solve(string ans, int cnt) {
	if (cnt == k) {   // cnt가 k가 됬다면 만족한 답을 result 벡터에 넣어준다. 
		result.push_back(ans);
		return;
	}

	if (sign[cnt] == '<') { //부등호가 < 라면
		int temp = ans[cnt] - '0'; //바로 전 숫자를 temp에 기억해 둔 후에
		for (int i = 0; i < 10; ++i) {
			if (temp >= i) // temp보다 i가 작다면 continue 한다.
				continue;
			if (!visited[i]) {  //temp보다 클 경우 아직 쓰지않은 숫자라면
				visited[i] = true;
				ans += (i + '0');
				solve(ans, cnt + 1); // 숫자를 추가해주고 다시 재귀 함수 돌린다.
				visited[i] = false;
				ans.pop_back();
			}
		}
	}
	else {
		int temp = ans[cnt] - '0';
		for (int i = 0; i < 10; ++i) {
			if (temp <= i)
				continue;
			if (!visited[i]) {
				visited[i] = true;
				ans += (i + '0');
				solve(ans, cnt + 1);
				visited[i] = false;
				ans.pop_back();
			}
		}
	}
}

int main() {
	cin >> k;
	for (int i = 0; i < k; ++i)
		cin >> sign[i];

	for (int i = 0; i < 10; ++i){
		if (!visited[i]) {
			visited[i] = true;
			ans += (i + '0');
			solve(ans, 0);  // 0부터 ~ 9까지 한 숫자를 먼저 고른다.
			visited[i] = false;
			ans.pop_back();
		}
	}
	cout << result[result.size() - 1] << endl; //0부터 완전탐색으로 해왔기에 정렬이 되어있다.
	cout << result[0] << endl;

	return 0;

}
