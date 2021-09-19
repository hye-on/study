#include <iostream>
#include <string>
#include <cmath>
using namespace std;

long long k = 0;

void hanoi(int n, int from, int tmp, int to) {
	if (n == 1)
		cout << from << ' ' << to << '\n';
	else {
		hanoi(n - 1, from, to, tmp);		//�� �Ʒ� ��ġ�� ������ ������ ��� ������ tmp�� �ű�
		cout << from << ' ' << to << '\n';	//from�� ��ġ�� �� �Ʒ� ������ to�� �ű�
		hanoi(n - 1, tmp, from, to);		//tmp�� ��ġ�� ������ to�� �ű�
	}
}

int main() {
	int n;
	cin >> n;

	//�ϳ��� ž�� ���� ���� �̵� Ƚ�� = 2^n - 1
	string s = to_string(pow(2, n));

	int x = s.find('.');
	s = s.substr(0, x);
	s[s.length() - 1] -= 1;

	cout << s << '\n';

	if (n <= 20)
		hanoi(n, 1, 2, 3);
}
