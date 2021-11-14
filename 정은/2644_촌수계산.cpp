#include <iostream>
#include <vector>
using namespace std;

vector<int> v[101];
int visited[101];
int ans = 0;

void dfs(int now, int end, int count) {
	visited[now] = 1;
	if (now == end)
		ans = count;
	for (int i = 0; i < v[now].size(); i++) {
		int next = v[now][i];
		if (!visited[next])
			dfs(next, end, count + 1);
	}
}

int main() {
	int n, m;
	int p1, p2;
	int x, y;

	cin >> n;
	cin >> p1 >> p2;
	cin >> m;

	for (int i = 0; i < m; i++) {
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}

	dfs(p1, p2,0);

	if (ans)
		cout << ans;
	else
		cout << -1;

	return 0;
}
