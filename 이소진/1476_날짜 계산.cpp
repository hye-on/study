#include <iostream>
using namespace std;

int main()
{
	int e, s, m, year = 1;
	cin >> e >> s >> m;

	while(true)
	{
		if ((year - e) % 15 == 0 && (year - s) % 28 == 0 && (year - m) % 19 == 0)
			break;
		year++;
		
	}

	cout << year << endl;

	return 0;
}