#include <iostream>
#include <algorithm>
#include <cmath>
#define MAX_ARR 9
using namespace std;

int input[MAX_ARR];
int selected[MAX_ARR];
int visited[MAX_ARR];
int n;
int mx = 0;

int cal() {
	int sum = 0;
	for(int i=0; i < n-1; i++)
		sum += abs(selected[i] - selected[i+1]);
	return sum;
}

void dfs(int cnt) {
	if (cnt == n) {
		mx = max(mx, cal());
		return;
	}

	for (int i = 0; i < n; i++) {
		if(!visited[i]) {
			visited[i] = 1;
			selected[cnt] = input[i];
			dfs(cnt+1);
			visited[i] = 0;  // 백트레킹
		}
	}
}

int main() {
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> input[i];

	for (int i = 0; i < n; i++) { // 첫번째 숫자
		visited[i] = 1;
		selected[0] = input[i];
		dfs(1);
		visited[i] = 0;
	}

	cout << mx;

	return 0;
}
