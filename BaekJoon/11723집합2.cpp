#include<iostream>
#include<string>
#include<bitset>
using namespace std;

int M, bit=0,x;
string S;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> M;
	while (M--) {

		cin >> S;
		if (S == "add")
		{
			cin >> x;
			bit |= (1 << x); //1�� x ��ŭ �������� ����Ʈ �ϰ� bit�ϰ� or ����
			//cout << bit << endl;
		}
		else if (S == "remove")
		{
			cin >> x; 
			bit &= ~(1 << x); //1�� x ��ŭ �������� ����Ʈ �ϰ� ~�ϰ� bit�ϰ� and ����
			   
		}
		else if (S == "check")
		{
			cin >> x;
			cout << (bit & (1 << x) ? 1 : 0)<< "\n";
		}
		else if (S == "toggle")
		{
			cin >> x;
			bit ^= 1 << x ;   //xor ����
		}
		else if (S == "all")
		{
			bit = -1;
			//������ -1�� ������ ��ǻ�ʹ� 2�� ���� ü�踦 ������ �ֱ� ������ ��� ��Ʈ�� 1�� �ȴ�.
		
		}
		else
			bit = 0;
	}
}
