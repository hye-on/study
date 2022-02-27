#include <iostream> 
#include <cstring> 
#include <vector> 
using namespace std; 

// 구조체 정의 
struct Node { 
	int index; 
	int dist; 
}; 

int v, maxDist, maxNode; 
bool visit[100001]; // 방문확인 
vector<Node> graph[100001]; 

void dfs(int node, int dist) { 
	if (visit[node])  // 방문한 노드면 return 
		return; 

	if (maxDist < dist) {  // maxDist 갱신
		maxDist = dist; 
		maxNode = node; 
	} 

	visit[node] = true;
	for (int i = 0; i < graph[node].size(); i++) {  // 현재 정점에서 연결 된 정점들로 dfs 수행 
		int nextIndex = graph[node][i].index; 
		int nextDist = graph[node][i].dist; 
		dfs(nextIndex, nextDist + dist); 
	} 
} 

int main() { 
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL); 

	cin >> v; 

	int fr, to, dist; 
	for (int i = 1; i < v + 1; i++) { 
		cin >> fr;

		while (true) { 
			cin >> to; 
			if (to == -1) 
				break; 
			cin >> dist;

			graph[fr].push_back({to, dist}); 
			graph[to].push_back({fr, dist}); 
		} 
	} 
	
	// 가장 거리가 먼 정점 찾기 
	dfs(1, 0); 
	memset(visit, 0, sizeof(visit)); 
	maxDist = 0; 
	
	// 가장 먼 정점에서 다시 dfs 수행하여 트리의 지름 찾기 
	dfs(maxNode, 0); 
	cout << maxDist << '\n'; 

	return 0; 
}
