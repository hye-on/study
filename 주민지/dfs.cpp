#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/*void dfs(int start){
  if(visit[start]){
    return; //이미 방문한 노드
  }

  visit[start] = true;
  cout << start;

  //start노드가 가지고 있는 자식 수 만큼 for문을 반복하라
  for(int i = 0; i < a[start].size(); i++){
    int x = a[start][i]; //start노드의 i번째 수
    dfs(x);
  }
}*/

void dfs(int parents_node, vector<int> graph[], bool check[]){
  check[parents_node]=true; //방문 했다면 무조건 출력이다.
  printf("%d", parents_node); //첫 노드로 1이 들어갔으니 1은 바로 출력된다. 

  for(int i=0; i < graph[parents_node].size(); i++){
    int next = graph[parents_node][i]; //parents_node노드는 부모노드, i는 자식 노드라 생각하면 편하다.

    //방문하지 않았다면
    if(check[next]==false){
      dfs(next, graph, check);
    }
  }
}

int main() {

    int n, m, parents_node; //n은 입력할 수 있는 수의 개수 m은 줄의 개수 start는 시작 노드
    cin >> n >> m >> parents_node;

    vector<int>graph[n+1]; //n+1개의 int형 graph배열 vector로 할당

    bool check[n+1]; //n+1개의 bool형 방문 확인 배열 생성
    fill(check, check+n+1,false); //fill은 check~check+n개 까지를 false로 채워주는 함수

    for(int i=0; i<m; i++){
      int u,v;
      cin >> u >> v;

      graph[u].push_back(v); //graph[u]에서 v를 추가하라(push_back) 노드 1에 2를 추가하라
      graph[u].push_back(u); //graph[u]에서 v를 추가하라(push_back) 노드 1에 1를 추가하라
    }

    for(int i=1; i<=n; i++){
      // 나중에 하나의 정점에서 다음을 탐색할 때 node 값에 순차적으로 접근해야하기 때문에 정렬해준다.
      sort(graph[i].begin(), graph[i].end());
    }

    dfs(parents_node, graph, check);
    printf("\n");

    return 0;
}
