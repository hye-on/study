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
			bit |= (1 << x); //1을 x 만큼 왼쪽으로 쉬프트 하고 bit하고 or 연산
			//cout << bit << endl;
		}
		else if (S == "remove")
		{
			cin >> x; 
			bit &= ~(1 << x); //1을 x 만큼 왼쪽으로 쉬프트 하고 ~하고 bit하고 and 연산
			   
		}
		else if (S == "check")
		{
			cin >> x;
			cout << (bit & (1 << x) ? 1 : 0)<< "\n";
		}
		else if (S == "toggle")
		{
			cin >> x;
			bit ^= 1 << x ;   //xor 연산
		}
		else if (S == "all")
		{
			bit = -1;
			//변수에 -1을 넣으면 컴퓨터는 2의 보수 체계를 가지고 있기 때문에 모든 비트가 1이 된다.
		
		}
		else
			bit = 0;
	}
}
