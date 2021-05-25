#include<iostream>
#include<string>

using namespace std;

int main()
{
	string a;
	cin >> a;
	int b = a.length();
	int aToz[26] = {};
	int max=-1;
	int maxIndex=0;
	bool abc=true;
	for (int i = 0; i < b; i++)
	{
		if (a[i] >= 'a')
			aToz[a[i] - 'a']++;
			
		
		else
			aToz[a[i] - 'A']++;
			

	}
	for (int i = 0; i < 26; i++)
	{
		if (aToz[i] > max)
		{
			max = aToz[i];
			maxIndex = i;
		}
	}
	for (int i = 0; i < 26; i++)
	{
		if (i != maxIndex && max == aToz[i])
		{
			cout << '?' << '\n';
			 abc = false;
			break;
		}
	}
	if (abc)
	{
		cout << char(maxIndex+'A') ;
	}
	
}