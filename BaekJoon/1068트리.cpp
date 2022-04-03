#include<iostream>
#include<vector>

using namespace std;

int N,cnt;
int temp, x = 0, root = 0;

vector<int>tree[51];
int check[51];
int a = 0;
void dfs(int node)
{
	check[node] = true;
	//cout << "  " << node << endl;

	if (tree[node].size()==0|| tree[node].size()==1 && tree[node][0] == x)//원래 leaf거나 잘라내서 leaf가 된경우
	{
		//cout << node << endl;
		cnt++;
		return;
	}

	for (int i = 0; i < tree[node].size(); i++)
	{
		if (!check[tree[node][i]])
		{
			
			dfs(tree[node][i]);
			
			
		}
		
	
	}
}
//트리 , 골드5
int main()
{
	cin >> N;

	
	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		if (temp == -1)
		{
			root = i;
			continue;
		}
		//temp는 부모, i는 자식 노드 번호
		tree[temp].push_back(i);
	}

	cin >> x;
	if (x == root)
	{
		cout << 0;
		return 0;
	}
	check[x] = true;
	tree[x].clear();//잘라내기
	dfs(root);
	
	
	
	cout << cnt;
}