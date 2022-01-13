#include <iostream>
#include <vector>
using namespace std;

vector<int> v;

int main() {
	int k;
	cin >> k;
	
	int big = 1;
	v.push_back(big);

	while (big < k) {
		big *= 2;
		v.push_back(big);
	}

	// 1,2,4,8,16,32, ... 

	int n = v.size();
	int temp = k;
	int count = 0;

	for (int i = n - 1; i >= 0; i--) {
		if (k == v[i]) {
			count = 1;
			break;
		}
		if (temp == 0)
			break;
		if (temp >= v[i])
			temp -= v[i];
		count++;
	}

	cout << big << ' ' << count - 1 << '\n';

	return 0;
}
