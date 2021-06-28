#include<iostream>
#include<string>
using namespace std;

int main()
{
    string N;
	cin >> N;
    char temp;

    for (int i = 0; i < N.length(); i++)
    {
        for (int j = 0; j <N.length() - i - 1; j++) //index값을 맞추기 위함
        {
            if (N[j] < N[j + 1]) //만약 앞의 숫자가 뒤의 숫자보다 작다면
            {
                temp = N[j]; //자리를 바꾸어라
                N[j] = N[j + 1];
                N[j + 1] = temp;
            }
        }
    }
    cout << N;
}
