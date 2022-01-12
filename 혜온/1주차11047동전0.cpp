#include<iostream>

using namespace std;

int main()
{
	int n, k;
	int num[10];
	cin >> n >> k;
	int check;
	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
		if (num[i] <= k)
		{
			 check = i;
			//break;
		}
	}
	int count = 0;
	while (k)
	{
		while (k - num[check] >= 0)
		{
			count++;
			k -= num[check];
		}
		check--;
	}
	cout << count;
}