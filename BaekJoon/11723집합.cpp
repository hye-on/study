#include<iostream>
#include<string>
using namespace std;

bool bit[21];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int M;
	cin >> M;
	int count = 0;


	/*add x : S에 x를 추가한다. (1 ≤ x ≤ 20) S에 x가 이미 있는 경우에는 연산을 무시한다.
		remove x : S에서 x를 제거한다. (1 ≤ x ≤ 20) S에 x가 없는 경우에는 연산을 무시한다.
		check x : S에 x가 있으면 1을, 없으면 0을 출력한다. (1 ≤ x ≤ 20)
		toggle x : S에 x가 있으면 x를 제거하고, 없으면 x를 추가한다. (1 ≤ x ≤ 20)
		all : S를{ 1, 2, ..., 20 } 으로 바꾼다.
		empty : S를 공집합으로 바꾼다.*/

	string s="";
	int x = 0;
	while (M--) {
		cin >> s;
		if (s != "all" && s != "empty")
			cin >> x;
		if (s == "add")
		{
			bit[x] = true;
		}
		else if (s == "remove")
		{
			bit[x] = false;
		}
		else if (s == "check")
		{
			count++;
			cout << bit[x] << "\n";
		}
		else if (s == "toggle")
		{
			if (bit[x])
				bit[x] = false;// S에 x가 있으면 제거하고
			else
				bit[x] = true;//없으면 추가
		}
		else if (s == "all")
		{
			for (int i = 1; i <= 20; i++)
				bit[i] = true;
		}
		else
		{
			for (int i = 1; i <= 20; i++)
				bit[i] = false;
		}
		/*cout << endl;
		cout << M << endl;*/
	}
}