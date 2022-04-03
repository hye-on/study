#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int>num;

//무엇을 정렬해야하지 싶었는데 출력 값을 순서대로 판별해야하기 때문에 입력값만 정렬해야한다.
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m, temp;
	cin >> n;
	
	for(int i=0;i<n;i++)
	{ 
		cin >> temp;
		num.push_back(temp);
	}
	sort(num.begin(), num.end());

	cin >> m;
	int right, left, mid;
	bool check = false;
	while (m--)
	{
		cin >> temp;
		right = n-1;
		left =0;
		//cout << left << "   " << right;
		
		check = false;
		while (right >= left)
		{
			mid = (right + left) / 2;
			//cout << left<<"  " << right << endl;
			if (temp > num[mid])
				left = mid +1;
			else if (temp < num[mid])
				right = mid-1;
			else
			{
				cout << 1 << " ";
				check = true;
				break;
			}
				
		
		}
		if (!check)
			cout << 0 << " ";

	}
}