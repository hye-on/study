#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	string s;
	vector<int> arr;
	cin >> s;

	//���Ϳ� ���� ����
	for (int i = 0; i < s.length(); i++)
	{
		arr.push_back(s[i] - '0');
	}

	//������������ ����
	sort(arr.begin(), arr.end());
	
	//�Ųٷ� ���
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[arr.size() - i - 1];
	}
	return 0;
}