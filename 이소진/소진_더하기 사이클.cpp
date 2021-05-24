#include <iostream>
using namespace std;

int main()
{
	int n, n2, left, right, hap, new_n, count = 0;
	cin >> n;
	n2 = n;

	while (true)
	{
		left = n2 / 10; //왼쪽 자리수
		right = n2 % 10; //오른쪽 자리수
		hap = left + right; //왼쪽 자리수 + 오른쪽 자리수
		new_n = right * 10 + hap % 10; //주어진 수의 가장 오른쪽 자리 수와 합의 가장 오른쪽 자리수를 이어 붙인 새로운 수
		count += 1;

		if (n != new_n) //원래의 수와 같지 않으면 사이클을 한번 더 돎.
			n2 = new_n;
		else
			break;
	}

	cout << count << endl;

	return 0;
}