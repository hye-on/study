#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int n;
bool num[100002];
vector<int> graph[100002];
int answer[100002];
queue<int>q;

void bfs(int node)
{
	
	q.push(node);
	while (!q.empty())
	{
		int a = q.front();
		num[a] = true;
		q.pop();
		for (int i = 0; i < graph[a].size(); i++)
		{
			if (!num[graph[a][i]])
			{
				answer[graph[a][i]] = a;
				q.push(graph[a][i]);
			}
		}
	}
	
}
int main()
{
		ios::sync_with_stdio(false);
		cin.tie(0); cout.tie(0);
		cin >> n;
		int tmpA, tmpB;
		for (int i = 0; i < n-1; i++)
		{
			cin >> tmpA >> tmpB;
			graph[tmpA].push_back(tmpB);
			graph[tmpB].push_back(tmpA);
	
		}
		bfs(1);
		for (int i = 2; i <= n; i++)
			cout << answer[i] << "\n";

}













//#include<iostream>
//#include<vector>
//#include<cstring>
//
//using namespace std;
//
//int n;
//bool num[100002];
//vector<int> graph[100002];
//vector<int> aa;
//int answer[100002];
//bool check = false;
//void dfs(int a)
//{
//	num[a] = true;
//	//cout << " " << a << "\n" << endl;
//	if (a == 1) 
//	{
//		for (int i = 0; i < aa.size()-1; i++)
//		{
//			answer[aa[i]] = aa[i + 1];
//			//cout << "   212    "<< aa[i] << "  " << aa[i + 1] << endl;
//			check = true;
//		}
//		aa.clear();
//		return;
//	}
//
//	for (int i = 0; i < graph[a].size(); i++)
//	{
//		if (!num[graph[a][i]])
//		{
//			aa.push_back(graph[a][i]);
//			if (graph[graph[a][i]].size() == 1 )
//				continue;
//			dfs(graph[a][i]);
//			//answer[graph[a][i]] = a;
//			answer[a] = graph[a][i];
//		//	cout << "1   " << a << " : " << graph[a][i] << endl;
//			aa.clear();
//			if (check)
//				return;
//			
//		}
//		else
//		{
//			if (answer[graph[a][i]] == a)
//				continue;
//			answer[a] = graph[a][i];
//			//cout << "2   " << a << " : " << graph[a][i] << endl;
//			if (check)
//				return;
//		}
//		
//		/*else
//		{
//			for (int i = 0; i < aa.size() - 1; i++)
//			{
//				answer[aa[i]] = aa[i + 1];
//			}
//				aa.clear();
//				return;
//		}*/
//	}
//}
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(0); cout.tie(0);
//	cin >> n;
//	int tmpA, tmpB;
//	for (int i = 0; i < n-1; i++)
//	{
//		cin >> tmpA >> tmpB;
//		graph[tmpA].push_back(tmpB);
//		graph[tmpB].push_back(tmpA);
//
//	}
//	int temp = 0;
//	//aa.push_back(2);
//	
//	for (int i = 2; i <= n; i++)//2번노드부터 
//	{
//		
//		
//			dfs(i);
//			//num[i] = false;
//			cout << answer[i] << "\n";
//		
//	}
//	
//	//for (int i = 2; i <= n; i++)
//		
//
//}