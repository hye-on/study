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
	if (cnt == k) {   // cnt�� k�� ��ٸ� ������ ���� result ���Ϳ� �־��ش�. 
		result.push_back(ans);
		return;
	}

	if (sign[cnt] == '<') { //�ε�ȣ�� < ���
		int temp = ans[cnt] - '0'; //�ٷ� �� ���ڸ� temp�� ����� �� �Ŀ�
		for (int i = 0; i < 10; ++i) {
			if (temp >= i) // temp���� i�� �۴ٸ� continue �Ѵ�.
				continue;
			if (!visited[i]) {  //temp���� Ŭ ��� ���� �������� ���ڶ��
				visited[i] = true;
				ans += (i + '0');
				solve(ans, cnt + 1); // ���ڸ� �߰����ְ� �ٽ� ��� �Լ� ������.
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
			solve(ans, 0);  // 0���� ~ 9���� �� ���ڸ� ���� ����.
			visited[i] = false;
			ans.pop_back();
		}
	}
	cout << result[result.size() - 1] << endl; //0���� ����Ž������ �ؿԱ⿡ ������ �Ǿ��ִ�.
	cout << result[0] << endl;

	return 0;

}
