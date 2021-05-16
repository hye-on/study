#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <functional>
using namespace std;

//���� 1655��: ����� ���ؿ�
//�ؼ�: ���� ����� Ǯ��. 

int n;		//�Էµ� ���� ����
priority_queue<int> maxq;								//�ִ� ��
priority_queue<int, vector<int>, greater<int>> minq;	//�ּ� ��

int main() {
	scanf_s("%d", &n);	//n �ޱ�
	for (int i = 0; i < n; i++) {	//n���� �� �Է� �ް� ó���ϱ�
		int x;
		scanf_s("%d", &x);

		//�ִ�, �ּ� ť �� ��� �Է°��� ������ �Ǻ�(maxq�� �׻� minq���� ũ�Ⱑ ���ų� 1Ŀ����)
		if (maxq.size() == minq.size()) {
			maxq.push(x);
		}
		else {
			minq.push(x);
		}

		//ť ����(minq�� top�� maxq���� �׻� Ŀ����)
		if (maxq.size() != 0 && minq.size() != 0 && maxq.top() > minq.top()) {
			int maxvalue = maxq.top();
			int minvalue = minq.top();
			maxq.pop();
			minq.pop();
			maxq.push(minvalue);
			minq.push(maxvalue);
		}

		printf("%d\n", maxq.top());
	}
	return 0;
}