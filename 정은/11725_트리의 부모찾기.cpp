#include <iostream>
#include <vector>
#define MAX_NODE 100001
using namespace std;

int n;
int u, v;
vector<int> vec[MAX_NODE];
int visited[MAX_NODE];
int ans[MAX_NODE];

void dfs(int node) {
	visited[node] = 1;

	for (int i = 0; i < vec[node].size(); i++) {
		int next = vec[node][i];

		if (!visited[next]) {
			ans[next] = node;
			dfs(next);
		}
	}

}

int main() {
	cin >> n;

	for (int i = 1; i < n; i++) {
		cin >> u >> v;
		vec[u].push_back(v);
		vec[v].push_back(u);
	}

	dfs(1);

	for (int i = 2; i <= n; i++)
		cout << ans[i] << "\n";

	return 0;
}
