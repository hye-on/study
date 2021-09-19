#include <iostream>
#include <string>
#include <cmath>
using namespace std;

long long k = 0;

void hanoi(int n, int from, int tmp, int to) {
	if (n == 1)
		cout << from << ' ' << to << '\n';
	else {
		hanoi(n - 1, from, to, tmp);		//맨 아래 위치한 원판을 제외한 모든 원판을 tmp로 옮김
		cout << from << ' ' << to << '\n';	//from에 위치한 맨 아래 원판을 to로 옮김
		hanoi(n - 1, tmp, from, to);		//tmp에 위치한 원판을 to로 옮김
	}
}

int main() {
	int n;
	cin >> n;

	//하노이 탑에 대한 원판 이동 횟수 = 2^n - 1
	string s = to_string(pow(2, n));

	int x = s.find('.');
	s = s.substr(0, x);
	s[s.length() - 1] -= 1;

	cout << s << '\n';

	if (n <= 20)
		hanoi(n, 1, 2, 3);
}
