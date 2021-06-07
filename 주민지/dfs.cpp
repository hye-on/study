#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void dfs(int parents_node, vector<int> graph[], bool check[]){
  check[parents_node]=true;
  printf("%d", parents_node);

  for(int i=0; i < graph[parents_node].size(); i++){
    int next = graph[parents_node][i];

    //방문하지 않았다면
    if(check[next]==false){
      dfs(next, graph, check);
    }
  }
}

int main() {

    int n, m, start; //n은 입력할 수 있는 수의 개수 m은 줄의 개수 start는 시작 노드
    cin >> n >> m >> start;

    vector<int>graph[n+1];

    bool check[n+1];
    fill(check, check+n+1,false);

    for(int i=0; i<m; i++){
      int u,v;
      cin >> u >> v;

      graph[u].push_back(v);
      graph[u].push_back(u);
    }

    for(int i=1; i<=n; i++){
      sort(graph[i].begin(), graph[i].end());
    }

    dfs(start, graph, check);
    printf("\n");

    return 0;
}
