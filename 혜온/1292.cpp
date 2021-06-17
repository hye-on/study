#include<iostream>
using namespace std;


int main() {
	int a, b;
	cin >> a >> b;
	int sum = 0;
	int cnt = 0;
	
	for (int i = 1; cnt<=b ; i++)
	{
		for (int j = 1; j<=i; j++)
		{
			cnt++;
			if (cnt >= a && cnt <= b)
				sum += i;
		}
	}
	cout << sum << endl;
	return 0;
}
