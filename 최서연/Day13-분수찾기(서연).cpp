#include <iostream>
using namespace std;

//���� 1193: �м�ã��
//����: �ش� ������ �м� ã��

int main() {
	int cnt, del = 1;
	cin >> cnt;

	while (cnt > 0) {
		cnt -= del++;
	}

	if((del-1)%2 == 1){
		cout << 1 - cnt << "/" << del - 1 + cnt;
	}
	else {
		cout << del - 1 + cnt << "/" << 1 - cnt;
	}

	return 0;
}