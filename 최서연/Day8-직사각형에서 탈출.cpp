#include <iostream>
#include <math.h>
using namespace std;

//���� 1085: ���簢������ Ż��
//����: ������ �� ��ǥ�� w, h ���� �Ʒ� ��ǥ�� 0,0�� ���簢���� ���� �� x,y���� ���簢�����α����� �ִܰŸ� ã��
//��� �Լ�: min�� abs

int main() {
	int x, y, w, h;
	cin >> x >> y >> w >> h;

	int x_min = x < abs(w - x) ? x : abs(w - x);	//x�������� �ּҰ�
	int y_min = y < abs(h - y) ? y : abs(h - y);	//y�������� �ּҰ�

	cout << min(x_min, y_min);

	return 0;
}