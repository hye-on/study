#include <iostream>
#include <algorithm>
#define MX 1002
using namespace std;
 
int arr[MX];
int N, C, W, dab, lim = 987654321;
 
bool com(const int i, const int j)
{
    return i > j;
}
 
int main(void)
{
    cin >> N >> C >> W;
 
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        if (arr[i] < lim) lim = arr[i];
    }
 
    for (int i = 1; i <= 10000; i++)
    {
        int tmp[MX] = { 0 };
        for (int j = 0; j < N; j++)
        {
            if (arr[j] % i) tmp[j] = W * arr[j] - W * (arr[j] % i) - C * (arr[j] / i);
            else tmp[j] = W * arr[j] - C * (arr[j] / i - 1);    
        }
        sort(tmp, tmp + N, com);
        int sum = 0;
        for (int j = 0; j < N; j++)
        {
            if (sum + tmp[j] < sum) break;
            sum += tmp[j];
        }
        if (sum > dab) dab = sum;
    }
    cout << dab << endl;
 
    return 0;
}
