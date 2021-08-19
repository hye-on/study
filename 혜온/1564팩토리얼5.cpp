#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int N;
	cin >> N;
	long long factorial5=1;
	int temp = 0;
	for (int i = 1; i <= N; i++)
	{
		temp = i % 10000000;
		if (temp == 0)
			temp = 1;
		factorial5 *=temp;
		while (factorial5 % 10 == 0)
		{
			factorial5 /= 10;
		}
		factorial5 %= 1000000000000;
		
		
	}
	factorial5 %=100000;
	cout.width(5); // ÆøÀ» 5·Î ÁöÁ¤
	cout.fill('0');
	cout << factorial5;
}