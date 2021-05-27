#include<iostream>
#include<string>
using namespace std;

int main()
{


	string a, b;
	cin >> a >> b;

	int a_l = a.length(), b_l = b.length(), result = 0;
	for (int i = 0; i < a_l; i++)
	{
		for (int j = 0; j < b_l; j++)
		{
			result += (a[i] - '0') * (b[j] - '0');
		}
	}
	cout << result;
}
	/*int a, b,a_l,b_l,result=0;

	cin >> a >> b;
	int aa[10000];
	int bb[10000];
	for (int i = 0; a >0; i++)
	{
		aa[i] = a % 10;
		a = a / 10;
		a_l = i+1;
		
	}
	for (int i = 0; b > 0; i++)
	{
		bb[i] = b % 10;
		b = b / 10;
		b_l = i+1;


	}
	for (int i = 0; i <a_l ; i++)
	{
		for ( int j = 0; j < b_l;  j++)
		{
			result += aa[i] * bb[j];
		}
	}
	cout<< result;*/
