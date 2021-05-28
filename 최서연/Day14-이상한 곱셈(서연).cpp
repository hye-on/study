#include <iostream>
#include <string>
using namespace std;

//백준 1225: 이상한 곱셈
//내용: 각 자리수를 모두 곱한 값 반환하기

int main() {
	string a, b;
	cin >> a >> b;

	long a_buff = 0, b_buff = 0;
	for (int i = 0; i < a.length(); i++) {
		a_buff += a[i] - '0';
	}
	for (int j = 0; j < b.length(); j++) {
		b_buff += b[j] - '0';
	}

	cout << a_buff * b_buff;

	return 0;
}