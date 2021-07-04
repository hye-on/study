#dp 다이나믹 프로그래밍 '적어도 C명'
#메모이제이션을 사용해, 이미 계산한 결과는 배열에 저장해 두고
#나중에 동일한 계산을 수행할 시 그 값을 반환한다.

import sys

input = sys.stdin.readline
inf = int(1e9) #1000000000

C, N = map(int, input().split())

while C > 1000 or N > 20:
    print("C는 1000보다 작거나 같은 자연수 이고, N은 20보다 작거나 같은 자연수 입니다.")
    C, N = map(int, input().split())

arr = [list(map(int, input().split())) for _ in range(N)]

#dp
dp = [0] + [inf] * (C+100) #배열 [0]과 [1e9]로 초기화 된 112개의 배열을 합치는 것이다.
#배열의 시작은 [0, 1000000000, 1000000000 ....] 초기화
#C의 최댓값은 100이고 100의 상태에서 적어도 C명을 늘려야 하기 때문에 100에서 12를 더헤준다.

for cost, cust in arr:
    for i in range(cust, C+101):
        dp[i] = min(dp[i], dp[i-cust] + cost)
        #손님 몇 명마다 얼마의 비용이 드는지 table에 저장시킨다.
        #dp를 이용한 곳은 dp라 써있는 모든 곳 입니다.

print(min(dp[C:C+101]))
