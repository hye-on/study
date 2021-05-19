#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	//변수 선언
	int n, s = 0;

	//입력 받음
	cin >> n;

	//벡터a, 벡터b 만들고, 값 입력
	vector<int> a(n);
	vector<int> b(n);

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> b[i];
	}

	//배열의 값들을 오름차순으로 정렬
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	//s에 값 저장
	for (int i = 0; i < n; i++)
	{
		s += (a[i] * b[n - i - 1]);
	}

	cout << s << endl;

	return 0;
}