#include <iostream>
using namespace std;

int reverse(int n)
{
	int rev;

	if (n >= 1000)
		rev = (n / 1000) + (n % 1000 / 100 * 10) + (n % 100 / 10 * 100) + (n % 10 * 1000);
	else if (n >= 100)
		rev = (n / 100) + (n % 100 / 10 * 10) + (n % 10 * 100);
	else if (n >= 10)
		rev = (n / 10) + (n % 10 * 10);
	else if (n >= 1)
		rev = n;

	return rev;
}

int main()
{
	int x, y, rev_x, rev_y, result;

	cin >> x >> y;
	rev_x = reverse(x);
	rev_y = reverse(y);
	result = reverse(rev_x + rev_y);

	cout << result << endl;

	return 0;
}
