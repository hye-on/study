#include <iostream>
using namespace std;

//백준 1110: 더하기 사이클
//내용: 새로운 수를 계속 만들어 본래의 수가 될때까지 걸리는 사이클의 수 반환

int main() {
	int num, new_num = 0, cnt = 0;
	cin >> num;

	new_num = 10 * (num % 10) + ((num < 10 ? num : num % 10 + num / 10) % 10);
	cnt++;

	while (new_num != num) {
		new_num = 10 * (new_num % 10) + ((new_num < 10 ? new_num : new_num % 10 + new_num / 10) % 10);
		cnt++;
	}

	cout << cnt;

	return 0;
}