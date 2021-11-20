#include <iostream> 
#include <algorithm>
using namespace std;

int chain[500000];

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> chain[i];
	
	sort(chain, chain + n);
	
	int sum = 0, cnt;
	for (int i = 0; i < n; i++) {
		cnt = n - i - 1;
		sum += chain[i];
		if (sum >= cnt) {
			cout << cnt;
			break;
		}
	}

	return 0;
}
