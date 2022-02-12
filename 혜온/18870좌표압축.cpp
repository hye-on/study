#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;
vector<int>v;

int n,tmp;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	cin >> n;
	int temp;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		v.push_back(temp);
		
	}
	
	set<int>s(v.begin(), v.end());
	vector<int>vv(s.begin(), s.end());
	
	for (int i=0;i<n;i++)
	{
		auto answer = lower_bound(vv.begin(), vv.end(), v[i])-vv.begin();
		cout << answer << " ";
	}
}