#include <iostream>
using namespace std;

int s[13];
int lotto[6];
int k;

void dfs(int start, int depth) {
	if (depth == 6) {
		for (int i = 0; i < 6; i++)
			cout << lotto[i] << " ";
		cout << "\n";
		return;
	}
	
	for (int i = start; i < k; i++) {
		lotto[depth] = s[i];
		dfs(i + 1, depth + 1);
	}
}

int main() {
	while (true) {
		cin >> k;
		if (k == 0) 
			break;

		for (int i = 0; i < k; i++)
			cin >> s[i];

		dfs(0, 0);
		cout << "\n";
	}
}
