#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, refusal = 0;
	int com[100] = {}; //1번부터 100번까지의 컴퓨터
	cin >> n;

	//원하는 자리 입력
	vector<int> seat;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		seat.push_back(x);
		com[x - 1]++; //선택된 자리에 해당하는 컴퓨터 +1
	}

	for (int i = 0; i < 100; i++)
	{
		if (com[i] >= 2)
			refusal += com[i] - 1; //2명 이상 선택됐을 경우 거절된 사람 수를 refusal에 더함.
	}

	cout << refusal << endl;

	return 0;
}