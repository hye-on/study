#include <iostream>
#include <algorithm>
#include <vector>
#define MAX 51
using namespace std;

vector<vector<int>> child_vec;
int answer = 0, del_node;

void dfs(int node) {
	if (del_node == node) 
		return;

	int child_size = child_vec[node].size();

	switch (child_size) {
	case 0:
		answer++; 
		return;
	case 1:
		if (child_vec[node][0] == del_node) {
			answer++; 
			break;
		}
	default:
		for (int idx = 0; idx < child_size; idx++)
			dfs(child_vec[node][idx]);
		break;
	}
}

int main() {
	int N, root;
	cin >> N;
	child_vec.resize(N);

	int parent;
	for (int idx = 0; idx < N; idx++) {
		cin >> parent;

		if (parent != -1) 
			child_vec[parent].push_back(idx);
		else 
			root = idx;
	}

	cin >> del_node;
	dfs(root);
	cout << answer;

	return 0;
}
