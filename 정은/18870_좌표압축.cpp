#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v, copy_v;
int n, input;

int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> input;
		v.push_back(input);
		copy_v.push_back(input);
	}

	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());

	for (int i = 0; i < n; i++)
		cout << lower_bound(v.begin(), v.end(), copy_v[i]) - v.begin() << "\n";
}
