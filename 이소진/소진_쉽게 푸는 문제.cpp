#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;
	int a, b, result = 0, count = 0;

	for (int i = 0; i < 1000; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			v.push_back(i);
			count++;
		}
		if (count == 1000)
			break;
	}
	
	cin >> a >> b;

	for (int i = a - 1; i < b; i++)
	{
		result += v[i];
	}
	cout << result << endl;

	return 0;
}