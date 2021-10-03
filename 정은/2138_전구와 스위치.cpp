#include <iostream>
#include <string>
#include <algorithm>
#define MAX 987654321
using namespace std;

int n, cnt=0, ans = MAX;
string start, result, temp;

void change(int idx) {
	if (idx > 0) temp[idx - 1] = (temp[idx - 1] == '0') ? '1' : '0';
	temp[idx] = (temp[idx] == '0') ? '1' : '0';
	if(idx<n-1) temp[idx+1] = (temp[idx+1] == '0') ? '1' : '0';
}

void f(int first) {
	temp = start;
	cnt = 0;
	if (first == 1) {
		temp[0] = (temp[0] == '0') ? '1' : '0';
		temp[1] = (temp[1] == '0') ? '1' : '0';
		cnt++;
	}
	for (int i = 1; i < n; i++) {
		if (temp[i-1] != result[i-1]) {
			change(i);
			cnt++;
		}
		if (temp == result)
			ans = min(ans, cnt);
	}
}

int main() {
	cin >> n;
	cin >> start >> result;
	f(1); //전구를 켜고 시작
	f(0); //전구를 켜지 않고 시작
	if (ans != MAX)
		cout << ans << '\n';
	else
		cout << -1 << '\n';

	return 0;
}
