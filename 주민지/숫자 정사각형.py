N, M = map(int, input().split()) #N은 행 M은 열
while (N > 50 or M > 50):
    print('N과 M은 50 이하의 수 입니다.')
    N, M = map(int, input().split())
    
arr = [] #사각형들의 숫자가 들어갈 곳

for i in range(N):
    arr.append = (list(input()))
res = 0 #답 변수 초기화

check = min(N, M) #행과 열 중 더 작은 것을 기준으로 정사각형을 탐색하겠다.

for i in range(N):
    for j in range(M):
        for k in range(check):
            if ((i + k) < N) and ((j + k) < M)  and (arr[i][j] == arr[i][j + k] == arr[i + k][j] == arr[i+k][j+k]): #모든 꼭짓점의 수가 같다면
                # ((i + k) < N) and ((j + k) < M) 인덱스 값을 넘어가는 걸 방지하기 위함
                res = max(res, (k+1) ** 2)
print(res)
