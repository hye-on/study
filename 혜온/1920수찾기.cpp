#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);
	int N,M;
	int num[100003] = { 0 };
	int findNum;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> num[i];
	}
	cin >> M;
	sort(num, num + N);

	long long m;
	
	for (int i = 0; i < M; i++)
	{
		
		long long left = 0, right = N-1;

		cin >> findNum;
		bool a = false;
		while (left <= right)
		{
			m = (left + right) / 2;
			if (findNum == num[m])
			{
				cout << 1 << '\n';
				a = true;
				break;

			}
			else if (findNum > num[m])
				left = m + 1;
			else 
				right = m-1;
			
		}
		//cout << m << " " << left << "  " << right << endl;
		if(!a)
			cout<<0 << '\n';

		

	}
	
	
}