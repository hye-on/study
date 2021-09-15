#include <iostream>
#include <algorithm>
#define MAX 100000
using namespace std;

int arr[MAX];
int dp[MAX]; //�ε��� ��ȣ������ �������� �ִ��� �����ϴ� �迭

int main() {
	int n, ansM;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	
	ansM = arr[0];	//���� �ִ�(ansM)�� arr[0]�� ����
	dp[0] = arr[0]; //0������ �������� �ִ��� arr[0]
	for (int i = 1; i < n; i++) {
		dp[i] = max(dp[i - 1] + arr[i], arr[i]); //n�������� �������� �ִ��� [n-1�������� �ִ� + n�� ��] �Ǵ� [n�� ��] �� �� �� ū ��
												 //-2/-1=>���� -1/-2=>���� -1/1=>���� 1/-1=>���� 1/2=>���� 2/1=>����
		ansM = max(dp[i], ansM);				 //n�������� �������� �ִ񰪰� ������ ����� ans(max)���� ���Ͽ� �� ū ������ ����
	}
	cout << ansM;
}
