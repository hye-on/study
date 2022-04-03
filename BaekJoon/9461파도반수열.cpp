#include<iostream>

using namespace std;

int main()
{
	int T,N; //1<=N<=100
	long long num[101];
	cin >> T;
	
	num[1] = 1;
	num[2] = 1;
	num[3] = 1;
	num[4] = 2;
	num[5] = 2;
	for (int i = 6; i <= 100; i++)
	{
		num[i] = num[i - 2] + num[i - 3];
		//cout << num[i] << endl;
	}
	while (T--)
	{
		cin >> N;
		cout << num[N] << "\n";
	}
}