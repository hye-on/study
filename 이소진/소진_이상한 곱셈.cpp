#include <iostream>
#include <string>
using namespace std;

int main()
{
	long result = 0;
	string a, b;

	cin >> a >> b;

	//result 값 구하기
	for (int i = 0; i < a.length(); i++)
	{
		for (int j = 0; j < b.length(); j++)
		{
			result += (a[i] - '0') * (b[j] - '0');
		}
	}
	
	cout << result << endl;

	return 0;
}