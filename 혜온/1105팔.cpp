#include<iostream>
#include<string>
using namespace std;

int main()
{
	string L, R;
	int count = 0;
	cin >> L >> R;


	int L_l = L.length();
	int R_l = R.length();

	for (int i = 0; i < L_l; i++)
	{
		if(L[i] == '8')
			count++;
	}
	
	if (L_l != R_l)
	{
		count = 0;
	}
	else
	{
			int j = 0; 
			while (L[j] == R[j] && j < L_l )
			{
				j++;
			}
			
			for ( int i=j; i < L_l; i++)
			{
				if (L[i] == '8')
					count--;
			}
				
	}
	

	cout << count;
}