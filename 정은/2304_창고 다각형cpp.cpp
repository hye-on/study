#include<iostream>
#include<algorithm>
using namespace std;

int d[1001];
int answer, maxVal;
int x = 0, y = 0; //x: 가장 큰 l값 저장, y: 가장 큰 h값을 갖는 l값 저장
int n, l, h;
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> l >> h;
		d[l] = h;
		if (x < l)
			x = l;
		if (d[y] < d[l]) //==if(dy < h)
			y = l;
	}

	for (int i = 1; i <= y; i++) {
		maxVal = max(d[i], maxVal);
		d[i] = maxVal;
	}
	maxVal = 0;
	for (int i = x; i > y; i--) {
		maxVal = max(d[i], maxVal);
		d[i] = maxVal;
	}
	for (int i = 1; i <= x; i++)
		answer += d[i];
	cout << answer;
}
