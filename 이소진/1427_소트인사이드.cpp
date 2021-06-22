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

	//벡터에 숫자 저장
	for (int i = 0; i < s.length(); i++)
	{
		arr.push_back(s[i] - '0');
	}

	//오름차순으로 정렬
	sort(arr.begin(), arr.end());
	
	//거꾸로 출력
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[arr.size() - i - 1];
	}
	return 0;
}