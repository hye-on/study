#include <iostream>
#include <cstring>
#define MAX_SIZE 27
using namespace std;

int n;
int list[MAX_SIZE][2];
int visited[MAX_SIZE];

int minusA(int num) {
	return num - 'A';
}

char plusA(int num) {
	return char(num + 'A');
}


void dfs(int root, int order) {
	if (root == minusA('.'))
		return;

	visited[root] = 1;


	for (int i = 0; i < 2; i++) {
		int next = list[root][i];
		
		if (!visited[next]) {
			switch (order) {
			case 0:
				if (i == 0)
					cout << plusA(root);
				dfs(next, order);
				break;
				
			case 1:
				dfs(next, order);
				if (i == 0)
					cout << plusA(root);
				break;

			case 2:
				dfs(next, order);
				if (i == 1)
					cout << plusA(root);
				break;			
			}
		}
	}
}

int main() {
	cin >> n;

	char root, lNode, rNode;
	for (int i = 0; i < n; i++) {
		cin >> root >> lNode >> rNode;
		list[minusA(root)][0] = minusA(lNode);
		list[minusA(root)][1] = minusA(rNode);
	}

	for (int i = 0; i < 3; i++) {
		dfs(0, i);
		cout << endl;
		memset(visited, 0, sizeof(visited));
	}
	
}
