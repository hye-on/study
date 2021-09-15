#include <iostream>
#include <algorithm>
#define MAX 100000
using namespace std;

int arr[MAX];
int dp[MAX]; //인덱스 번호까지의 연속합의 최댓값을 저장하는 배열

int main() {
	int n, ansM;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	
	ansM = arr[0];	//현재 최댓값(ansM)을 arr[0]로 설정
	dp[0] = arr[0]; //0번까지 연속합의 최댓값은 arr[0]
	for (int i = 1; i < n; i++) {
		dp[i] = max(dp[i - 1] + arr[i], arr[i]); //n번까지의 연속합의 최댓값은 [n-1번까지의 최댓값 + n번 값] 또는 [n번 값] 둘 중 더 큰 값
												 //-2/-1=>후자 -1/-2=>후자 -1/1=>후자 1/-1=>전자 1/2=>전자 2/1=>전자
		ansM = max(dp[i], ansM);				 //n번까지의 연속합의 최댓값과 이전에 저장된 ans(max)값을 비교하여 더 큰 값으로 갱신
	}
	cout << ansM;
}
