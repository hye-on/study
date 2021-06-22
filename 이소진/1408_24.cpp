#include <iostream>
using namespace std;

int main()
{
	int h1, h2, m1, m2, s1, s2, second1, second2, result, rh, rm, rs;
	char c;

	cin >> h1 >> c >> m1 >> c >> s1 >> h2 >> c >> m2 >> c >> s2;

	second1 = s1 + (m1 * 60) + (h1 * 60 * 60);
	second2 = s2 + (m2 * 60) + (h2 * 60 * 60);

	if (second1 < second2)
	{
		result = second2 - second1;
		rh = result / 60 / 60;
		rm = result / 60 % 60;
		rs = result % 60;
	}
	else
	{
		result = second2 + (24 * 60 * 60) - second1;
		rh = result / 60 / 60;
		rm = result / 60 % 60;
		rs = result % 60;
	}

	printf("%02d:%02d:%02d", rh, rm, rs);

	return 0;
}