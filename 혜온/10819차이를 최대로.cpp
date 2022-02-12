#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;
int n[8];
int arr[8];
int visit[8];
int num,sum,Max=-2;
void dfs(int depth)
{
	if (depth == num)
	{
		for (int i = 0; i < num -1; i++)
		{
			sum += abs(arr[i] - arr[i + 1]);
		}
		if (sum > Max)
			Max = sum;
		sum = 0;
		return;
	}

	for (int i = 0; i < num; i++)
	{
		if (visit[i]) continue;              // 앞에서 뽑힌 값이라면 넘어감
			visit[i] = true;
		arr[depth] = n[i];
		dfs(depth + 1);
		visit[i] = false;
	}
}
int main()
{
	
	cin >> num;

	for (int i = 0; i < num; i++)
	{
		cin >> n[i];
	}
	sort(n, n + num);

	dfs(0);
	cout << Max;
	/*sort(n, n + num);
	cout << n[0] << endl;;
	int sum=0;
	for (int i = 0; i<num-i-2 ; i++)
	{
		sum += (n[num - i-1] - n[i]);
		sum += (n[num - i-1] - n[i+1]);
		cout << num - i-1 << "  " << i << endl;
		cout << num - i-2 << "  " << i << endl;


	}
	if (num % 2 == 0)
		sum += (n[3] - n[2]);
	cout << sum;*/
}