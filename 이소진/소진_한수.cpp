#include <iostream>
using namespace std;

//한수인지 판별하는 함수
bool hansoo(int n)
{
	int a = n / 100; //100의 자리수
	int b = n % 100 / 10; //10의 자리수
	int c = n % 100 % 10; //1의 자리수

	if (n == 1000)
		return false;
	else if (n >= 100)
	{
		if ((a - b) == (b - c))
			return true;
		else
			return false;
	}
	else
		return true;
	
}

int main()
{
	int n, count = 0;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		if (hansoo(i))
			count += 1;
	}

	cout << count << endl;

	return 0;
}