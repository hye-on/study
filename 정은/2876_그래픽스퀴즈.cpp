#include <iostream>
using namespace std;

int n, a, b;
int grades[100001][6];  // i 번째 책상까지 j 번째 등급의 최대 연속 값을 담는 dp 배열
int maxval, maxidx;

int main() {
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> a >> b;
		grades[i][a] = grades[i - 1][a] + 1;  // 이전 책상까지의 값 + 1
		if (grades[i][a] > maxval) {		 // 최댓값 갱신
			maxval = grades[i][a];
			maxidx = a;
		}
		if (a != b) {                              // A 와 B 값이 같으면 하나만 처리해줘야 함
			grades[i][b] = grades[i - 1][b] + 1;  // 다를 경우에는 B 값에 대해서도 똑같은 처리
			if (grades[i][b] > maxval){
				maxval = grades[i][b];
				maxidx = b;
			}
		}
	}

	cout << maxval << " " << maxidx << '\n';
}
