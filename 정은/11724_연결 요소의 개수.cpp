#include <iostream>
#include <vector>
using namespace std;

vector<int> vec[1001];  // 인접 리스트 구현
int visited[1001];  // 노드의 방문 여부

void dfs(int node) {
	visited[node] = 1;

	for (int i = 0; i < vec[node].size(); i++) {
		int next = vec[node][i];
		if (!visited[next])
			dfs(next);
	}
}

int main() {
	int N, M;
	cin >> N >> M;

	int u, v;
	while (M--) {
		cin >> u >> v;
		vec[u].push_back(v);
		vec[v].push_back(u);
	}

	int cnt = 0;
	for (int i = 1; i <= N; i++) {
		if (!visited[i]) {
			dfs(i);
			cnt++;
		}
	}

	cout << cnt << "\n";
}
