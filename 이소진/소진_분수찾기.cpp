#include <iostream>
using namespace std;

int main()
{
	int x, num = 1; //num은 행을 저장하는 변수
	cin >> x;

	//행 구하기
	while (x > num)
	{
		x -= num;
		num += 1;
	}

	//출력
	if (num % 2 == 0)
	{
		cout << x << "/" << num + 1 - x << endl;
	}
	else
	{
		cout << num + 1 - x << "/" << x << endl;
	}
	

	return 0;
}