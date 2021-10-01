#include<iostream>


using namespace std;

int num[5][5];
bool overlap[1000000];
int ans;


int dx[] = { 1, 0 ,-1,0 };
int dy[] = { 0,-1 ,0, 1 };

int nx, ny;
string temp;
void dfs(int x, int y,int depth,int cnt)
{
	if (depth == 5)
	{
		if (!overlap[cnt])
		{
			overlap[cnt] = true;
			ans++;
		}
		return;
	}
	

	for (int i = 0; i < 4; i++)
	{
		 nx = x + dx[i];
		 ny = y + dy[i];
		if (nx < 0 || ny < 0 || nx >= 5 || ny >= 5)
			continue;
			

			dfs(nx, ny,depth+1,cnt*10+num[nx][ny]);
		
	}

}
int main()
{
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			cin >> num[i][j];

	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
		{
			
				
				dfs(i, j,0,num[i][j]);
			
		
		}


	cout << ans << endl;
	
}