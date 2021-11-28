#include <iostream>
using namespace std;

int n, a, b;
int grades[100001][6];  // i ��° å����� j ��° ����� �ִ� ���� ���� ��� dp �迭
int maxval, maxidx;

int main() {
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> a >> b;
		grades[i][a] = grades[i - 1][a] + 1;  // ���� å������� �� + 1
		if (grades[i][a] > maxval) {		 // �ִ� ����
			maxval = grades[i][a];
			maxidx = a;
		}
		if (a != b) {                              // A �� B ���� ������ �ϳ��� ó������� ��
			grades[i][b] = grades[i - 1][b] + 1;  // �ٸ� ��쿡�� B ���� ���ؼ��� �Ȱ��� ó��
			if (grades[i][b] > maxval){
				maxval = grades[i][b];
				maxidx = b;
			}
		}
	}

	cout << maxval << " " << maxidx << '\n';
}
